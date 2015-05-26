
/*
 * %W% %E%
 *
 * (C) Copyright IBM Corp. 1998, 1999, 2000, 2001, 2002 - All Rights Reserved
 *
 */

#ifndef __OPENTYPELAYOUTENGINE_H
#define __OPENTYPELAYOUTENGINE_H

#include "LETypes.h"
#include "LEGlyphFilter.h"
#include "LEFontInstance.h"
#include "LayoutEngine.h"

#include "GlyphSubstitutionTables.h"
#include "GlyphDefinitionTables.h"
#include "GlyphPositioningTables.h"

U_NAMESPACE_BEGIN

/**
 * OpenTypeLayoutEngine implements complex text layout for OpenType fonts - that is
 * fonts which have GSUB and GPOS tables associated with them. In order to do this,
 * the glyph processsing step described for LayoutEngine is further broken into three
 * steps:
 *
 * 1) Character processing - this step analyses the characters and assigns a list of OpenType
 *    feature tags to each one. It may also change, remove or add characters, and change
 *    their order.
 *
 * 2) Glyph processing - This step performs character to glyph mapping,and uses the GSUB
 *    table associated with the font to perform glyph substitutions, such as ligature substitution.
 *
 * 3) Glyph post processing - in cases where the font doesn't directly contain a GSUB table,
 *    the previous two steps may have generated "fake" glyph indices to use with a "canned" GSUB
 *    table. This step turns those glyph indices into actual font-specific glyph indices, and may
 *    perform any other adjustments requried by the previous steps.
 *
 * OpenTypeLayoutEngine will also use the font's GPOS table to apply position adjustments
 * such as kerning and accent positioning.
 *
 * @see LayoutEngine
 */
class OpenTypeLayoutEngine : public LayoutEngine
{
public:
    /**
     * This is the main constructor. It constructs an instance of OpenTypeLayoutEngine for
     * a particular font, script and language. It takes the GSUB table as a parameter since
     * LayoutEngine::layoutEngineFactory has to read the GSUB table to know that it has an
     * OpenType font.
     *
     * @param fontInstance - the font
     * @param scriptCode - the script
     * @param langaugeCode - the language
     * @param gsubTable - the GSUB table
     *
     * @see LayoutEngine::layoutEngineFactory
     * @see ScriptAndLangaugeTags.h for script and language codes
     */
    OpenTypeLayoutEngine(const LEFontInstance *fontInstance, le_int32 scriptCode, le_int32 languageCode,
                            const GlyphSubstitutionTableHeader *gsubTable);

    /**
     * This constructor is used when the font requires a "canned" GSUB table which can't be known
     * until after this constructor has been invoked.
     *
     * @param fontInstance - the font
     * @param scriptCode - the script
     * @param langaugeCode - the language
     */
    OpenTypeLayoutEngine(const LEFontInstance *fontInstance, le_int32 scriptCode, le_int32 languageCode);

    /**
     * The destructor, virtual for correct polymorphic invocation.
     */
    virtual ~OpenTypeLayoutEngine();

    /**
     * A convenience method used to convert the script code into
     * the four byte script tag required by OpenType.
     *
     * @param scriptCode - the script code
     *
     * @return the four byte script tag
     */
    static LETag getScriptTag(le_int32 scriptCode);

    /**
     * A convenience method used to convert the langauge code into
     * the four byte langauge tag required by OpenType.
     *
     * @param languageCode - the language code
     *
     * @return the four byte language tag
     */
    static LETag getLangSysTag(le_int32 languageCode);

private:

    /**
     * This method is used by the constructors to convert the script
     * and language codes to four byte tags and save them.
     */
    void setScriptAndLanguageTags();

    /**
     * The array of script tags, indexed by script code.
     */
    static const LETag scriptTags[];

protected:
    /**
     * An array of pointers to four byte feature tags.
     * Each pointer points to a list of tags, terminated
     * by a special empty tag.
     */
    const LETag **fFeatureTags;

        /**
         * A list of tags in the order in which the features in
         * the font should be applied, as opposed to using the
         * order of the lookups in the font.
         */
    const LETag *fFeatureOrder;

    /**
     * The address of the GSUB table.
     */
    const GlyphSubstitutionTableHeader *fGSUBTable;

    /**
     * The address of the GDEF table.
     */
    const GlyphDefinitionTableHeader   *fGDEFTable;

    /**
     * The address of the GPOS table.
     */
    const GlyphPositioningTableHeader  *fGPOSTable;

    /**
     * An optional filter used to inhibit substitutions
     * preformed by the GSUB table. This is used for some
     * "canned" GSUB tables to restrict substitutions to
     * glyphs that are in the font.
     */
    LEGlyphFilter *fSubstitutionFilter;

    /**
     * The four byte script tag.
     */
    LETag fScriptTag;

    /**
     * The four byte language tag
     */
    LETag fLangSysTag;

    /**
     * This method does the OpenType character processing. It assigns the OpenType feature
     * tags to the characters, and may generate output characters that differ from the input
     * charcters dueto insertions, deletions, or reorderings. In such cases, it will also
     * generate an output character index array reflecting these changes.
     *
     * Subclasses must override this method.
     *
     * Input parameters:
     * @param chars - the input character context
     * @param offset - the index of the first character to process
     * @param count - the number of characters to process
     * @param max - the number of characters in the input context
     * @param rightToLeft - true if the characters are in a right to left directional run
     *
     * Output parameters:
     * @param outChars - the output character array, if different from the input
     * @param charIndices - the output character index array
     * @param featureTags - the output feature tag array
     * @param success - set to an error code if the operation fails
     *
     * @return the output character count (input character count if no change)
     */
    virtual le_int32 characterProcessing(const LEUnicode chars[], le_int32 offset, le_int32 count, le_int32 max, le_bool rightToLeft,
            LEUnicode *&outChars, le_int32 *&charIndices, const LETag **&featureTags, LEErrorCode &success) /*= 0;*/
    {
        if (LE_FAILURE(success)) {
            return 0;
        }

        if (offset < 0 || count < 0 || max < 0 || offset >= max || offset + count > max) {
            success = LE_ILLEGAL_ARGUMENT_ERROR;
            return 0;
        }

        return count;
    };

    /**
     * This method does character to glyph mapping, and applies the GSUB table. The
     * default implementation calls mapCharsToGlyphs and then applies the GSUB table,
     * if there is one.
     *
     * Note that in the case of "canned" GSUB tables, the output glyph indices may be
     * "fake" glyph indices that need to be converted to "real" glyph indices by the
     * glyphPostProcessing method.
     *
     * Input parameters:
     * @param chars - the input character context
     * @param offset - the index of the first character to process
     * @param count - the number of characters to process
     * @param max - the number of characters in the input context
     * @param rightToLeft - true if the characters are in a right to left directional run
     * @param featureTags - the feature tag array
     *
     * Output parameters:
     * @param glyphs - the output glyph index array
     * @param charIndices - the output character index array
     * @param success - set to an error code if the operation fails
     *
     * @return the number of glyphs in the output glyph index array
     *
     * Note: if the character index array was already set by the characterProcessing
     * method, this method won't change it.
     */
    virtual le_int32 glyphProcessing(const LEUnicode chars[], le_int32 offset, le_int32 count, le_int32 max, le_bool rightToLeft,
            const LETag **featureTags, LEGlyphID *&glyphs, le_int32 *&charIndices, LEErrorCode &success);

    /**
     * This method does any processing necessary to convert "fake"
     * glyph indices used by the glyphProcessing method into "real" glyph
     * indices which can be used to render the text. Note that in some
     * cases, such as CDAC Indic fonts, several "real" glyphs may be needed
     * to render one "fake" glyph.
     *
     * The default implementation of this method just returns the input glyph
     * index and character index arrays, assuming that no "fake" glyph indices
     * were needed to do GSUB processing.
     *
     * Input paramters:
     * @param tempGlyphs - the input "fake" glyph index array
     * @param tempCharIndices - the input "fake" character index array
     * @param tempGlyphCount - the number of "fake" glyph indices
     *
     * Output parameters:
     * @param glyphs - the output glyph index array
     * @param charIndices - the output character index array
     * @param success - set to an error code if the operation fails
     *
     * @return the number of glyph indices in the output glyph index array
     */
    virtual le_int32 glyphPostProcessing(LEGlyphID tempGlyphs[], le_int32 tempCharIndices[], le_int32 tempGlyphCount,
                    LEGlyphID *&glyphs, le_int32 *&charIndices, LEErrorCode &success)
    {
        if (LE_FAILURE(success)) {
            return 0;
        }

        glyphs = tempGlyphs;
        charIndices = tempCharIndices;

        return tempGlyphCount;
    };

    /**
     * This method applies the characterProcessing, glyphProcessing and glyphPostProcessing
     * methods. Most subclasses will not need to override this method.
     *
     * Input parameters:
     * @param chars - the input character context
     * @param offset - the index of the first character to process
     * @param count - the number of characters to process
     * @param max - the number of characters in the input context
     * @param rightToLeft - true if the text is in a right to left directional run
     *
     * Output parameters:
     * @param glyphs - the glyph index array
     * @param charIndices - the character index array
     * @param success - set to an error code if the operation fails
     *
     * @return the number of glyphs in the glyph index array
     *
     * @see LayoutEngine::computeGlyphs
     */
    virtual le_int32 computeGlyphs(const LEUnicode chars[], le_int32 offset, le_int32 count, le_int32 max, le_bool rightToLeft, LEGlyphID *&glyphs, le_int32 *&charIndices, LEErrorCode &success);

    /**
     * This method uses the GPOS table, if there is one, to adjust the glyph positions.
     *
     * Input parameters:
     * @param glyphs - the input glyph array
     * @param glyphCount - the number of glyphs in the glyph array
     * @param x - the starting X position
     * @param y - the starting Y position
     *
     * Output parameters:
     * @param positions - the output X and Y positions (two entries per glyph)
     * @param success - set to an error code if the operation fails
     */
    virtual void adjustGlyphPositions(const LEUnicode chars[], le_int32 offset, le_int32 count, le_bool reverse, LEGlyphID glyphs[], le_int32 glyphCount, float positions[], LEErrorCode &success);

    /**
     * This method frees the feature tag array so that the
     * OpenTypeLayoutEngine can be reused for different text.
     * It is also called from our destructor.
     */
    virtual void reset();
};

U_NAMESPACE_END
#endif
