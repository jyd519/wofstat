/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /jds/packages/BUILD/SUNWfirefox-10.0.2/firefox/intl/chardet/public/nsIDocCharset.idl
 */

#ifndef __gen_nsIDocCharset_h__
#define __gen_nsIDocCharset_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDocCharset */
#define NS_IDOCCHARSET_IID_STR "9c18bb4e-1dd1-11b2-bf91-9cc82c275823"

#define NS_IDOCCHARSET_IID \
  {0x9c18bb4e, 0x1dd1, 0x11b2, \
    { 0xbf, 0x91, 0x9c, 0xc8, 0x2c, 0x27, 0x58, 0x23 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDocCharset : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCCHARSET_IID)

  /* attribute string charset; */
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocCharset, NS_IDOCCHARSET_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCCHARSET \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCCHARSET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) { return _to GetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) { return _to SetCharset(aCharset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCCHARSET(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCharset(char * *aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const char * aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharset(aCharset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocCharset : public nsIDocCharset
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCCHARSET

  nsDocCharset();

private:
  ~nsDocCharset();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocCharset, nsIDocCharset)

nsDocCharset::nsDocCharset()
{
  /* member initializers and constructor code */
}

nsDocCharset::~nsDocCharset()
{
  /* destructor code */
}

/* attribute string charset; */
NS_IMETHODIMP nsDocCharset::GetCharset(char * *aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDocCharset::SetCharset(const char * aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDocCharset_h__ */