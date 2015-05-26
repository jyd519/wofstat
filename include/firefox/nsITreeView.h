/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /jds/packages/BUILD/SUNWfirefox-10.0.2/firefox/layout/xul/base/src/tree/public/nsITreeView.idl
 */

#ifndef __gen_nsITreeView_h__
#define __gen_nsITreeView_h__


#ifndef __gen_nsITreeBoxObject_h__
#include "nsITreeBoxObject.h"
#endif

#ifndef __gen_nsISupportsArray_h__
#include "nsISupportsArray.h"
#endif

#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITreeSelection; /* forward declaration */

class nsITreeColumn; /* forward declaration */

class nsIDOMDataTransfer; /* forward declaration */


/* starting interface:    nsITreeView */
#define NS_ITREEVIEW_IID_STR "c06dc4d3-63a2-4422-a0a3-5f2eddeca8c1"

#define NS_ITREEVIEW_IID \
  {0xc06dc4d3, 0x63a2, 0x4422, \
    { 0xa0, 0xa3, 0x5f, 0x2e, 0xdd, 0xec, 0xa8, 0xc1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITreeView : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITREEVIEW_IID)

  /* readonly attribute long rowCount; */
  NS_SCRIPTABLE NS_IMETHOD GetRowCount(PRInt32 *aRowCount) = 0;

  /* attribute nsITreeSelection selection; */
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsITreeSelection * *aSelection) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsITreeSelection *aSelection) = 0;

  /* void getRowProperties (in long index, in nsISupportsArray properties); */
  NS_SCRIPTABLE NS_IMETHOD GetRowProperties(PRInt32 index, nsISupportsArray *properties) = 0;

  /* void getCellProperties (in long row, in nsITreeColumn col, in nsISupportsArray properties); */
  NS_SCRIPTABLE NS_IMETHOD GetCellProperties(PRInt32 row, nsITreeColumn *col, nsISupportsArray *properties) = 0;

  /* void getColumnProperties (in nsITreeColumn col, in nsISupportsArray properties); */
  NS_SCRIPTABLE NS_IMETHOD GetColumnProperties(nsITreeColumn *col, nsISupportsArray *properties) = 0;

  /* boolean isContainer (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsContainer(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isContainerOpen (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsContainerOpen(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isContainerEmpty (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsContainerEmpty(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isSeparator (in long index); */
  NS_SCRIPTABLE NS_IMETHOD IsSeparator(PRInt32 index, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isSorted (); */
  NS_SCRIPTABLE NS_IMETHOD IsSorted(bool *_retval NS_OUTPARAM) = 0;

  enum { DROP_BEFORE = -1 };

  enum { DROP_ON = 0 };

  enum { DROP_AFTER = 1 };

  /* boolean canDrop (in long index, in long orientation, in nsIDOMDataTransfer dataTransfer); */
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, bool *_retval NS_OUTPARAM) = 0;

  /* void drop (in long row, in long orientation, in nsIDOMDataTransfer dataTransfer); */
  NS_SCRIPTABLE NS_IMETHOD Drop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) = 0;

  /* long getParentIndex (in long rowIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetParentIndex(PRInt32 rowIndex, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean hasNextSibling (in long rowIndex, in long afterIndex); */
  NS_SCRIPTABLE NS_IMETHOD HasNextSibling(PRInt32 rowIndex, PRInt32 afterIndex, bool *_retval NS_OUTPARAM) = 0;

  /* long getLevel (in long index); */
  NS_SCRIPTABLE NS_IMETHOD GetLevel(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* AString getImageSrc (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD GetImageSrc(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) = 0;

  enum { PROGRESS_NORMAL = 1 };

  enum { PROGRESS_UNDETERMINED = 2 };

  enum { PROGRESS_NONE = 3 };

  /* long getProgressMode (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD GetProgressMode(PRInt32 row, nsITreeColumn *col, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* AString getCellValue (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD GetCellValue(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getCellText (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD GetCellText(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) = 0;

  /* void setTree (in nsITreeBoxObject tree); */
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *tree) = 0;

  /* void toggleOpenState (in long index); */
  NS_SCRIPTABLE NS_IMETHOD ToggleOpenState(PRInt32 index) = 0;

  /* void cycleHeader (in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD CycleHeader(nsITreeColumn *col) = 0;

  /* void selectionChanged (); */
  NS_SCRIPTABLE NS_IMETHOD SelectionChanged(void) = 0;

  /* void cycleCell (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD CycleCell(PRInt32 row, nsITreeColumn *col) = 0;

  /* boolean isEditable (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD IsEditable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) = 0;

  /* boolean isSelectable (in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD IsSelectable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) = 0;

  /* void setCellValue (in long row, in nsITreeColumn col, in AString value); */
  NS_SCRIPTABLE NS_IMETHOD SetCellValue(PRInt32 row, nsITreeColumn *col, const nsAString & value) = 0;

  /* void setCellText (in long row, in nsITreeColumn col, in AString value); */
  NS_SCRIPTABLE NS_IMETHOD SetCellText(PRInt32 row, nsITreeColumn *col, const nsAString & value) = 0;

  /* void performAction (in wstring action); */
  NS_SCRIPTABLE NS_IMETHOD PerformAction(const PRUnichar * action) = 0;

  /* void performActionOnRow (in wstring action, in long row); */
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnRow(const PRUnichar * action, PRInt32 row) = 0;

  /* void performActionOnCell (in wstring action, in long row, in nsITreeColumn col); */
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnCell(const PRUnichar * action, PRInt32 row, nsITreeColumn *col) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITreeView, NS_ITREEVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITREEVIEW \
  NS_SCRIPTABLE NS_IMETHOD GetRowCount(PRInt32 *aRowCount); \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsITreeSelection * *aSelection); \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsITreeSelection *aSelection); \
  NS_SCRIPTABLE NS_IMETHOD GetRowProperties(PRInt32 index, nsISupportsArray *properties); \
  NS_SCRIPTABLE NS_IMETHOD GetCellProperties(PRInt32 row, nsITreeColumn *col, nsISupportsArray *properties); \
  NS_SCRIPTABLE NS_IMETHOD GetColumnProperties(nsITreeColumn *col, nsISupportsArray *properties); \
  NS_SCRIPTABLE NS_IMETHOD IsContainer(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsContainerOpen(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsContainerEmpty(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsSeparator(PRInt32 index, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsSorted(bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Drop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer); \
  NS_SCRIPTABLE NS_IMETHOD GetParentIndex(PRInt32 rowIndex, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasNextSibling(PRInt32 rowIndex, PRInt32 afterIndex, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(PRInt32 index, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetImageSrc(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProgressMode(PRInt32 row, nsITreeColumn *col, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCellValue(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCellText(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *tree); \
  NS_SCRIPTABLE NS_IMETHOD ToggleOpenState(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD CycleHeader(nsITreeColumn *col); \
  NS_SCRIPTABLE NS_IMETHOD SelectionChanged(void); \
  NS_SCRIPTABLE NS_IMETHOD CycleCell(PRInt32 row, nsITreeColumn *col); \
  NS_SCRIPTABLE NS_IMETHOD IsEditable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsSelectable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetCellValue(PRInt32 row, nsITreeColumn *col, const nsAString & value); \
  NS_SCRIPTABLE NS_IMETHOD SetCellText(PRInt32 row, nsITreeColumn *col, const nsAString & value); \
  NS_SCRIPTABLE NS_IMETHOD PerformAction(const PRUnichar * action); \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnRow(const PRUnichar * action, PRInt32 row); \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnCell(const PRUnichar * action, PRInt32 row, nsITreeColumn *col); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITREEVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRowCount(PRInt32 *aRowCount) { return _to GetRowCount(aRowCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsITreeSelection * *aSelection) { return _to GetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsITreeSelection *aSelection) { return _to SetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD GetRowProperties(PRInt32 index, nsISupportsArray *properties) { return _to GetRowProperties(index, properties); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellProperties(PRInt32 row, nsITreeColumn *col, nsISupportsArray *properties) { return _to GetCellProperties(row, col, properties); } \
  NS_SCRIPTABLE NS_IMETHOD GetColumnProperties(nsITreeColumn *col, nsISupportsArray *properties) { return _to GetColumnProperties(col, properties); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainer(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsContainer(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainerOpen(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsContainerOpen(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainerEmpty(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsContainerEmpty(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSeparator(PRInt32 index, bool *_retval NS_OUTPARAM) { return _to IsSeparator(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSorted(bool *_retval NS_OUTPARAM) { return _to IsSorted(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, bool *_retval NS_OUTPARAM) { return _to CanDrop(index, orientation, dataTransfer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) { return _to Drop(row, orientation, dataTransfer); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentIndex(PRInt32 rowIndex, PRInt32 *_retval NS_OUTPARAM) { return _to GetParentIndex(rowIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasNextSibling(PRInt32 rowIndex, PRInt32 afterIndex, bool *_retval NS_OUTPARAM) { return _to HasNextSibling(rowIndex, afterIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return _to GetLevel(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageSrc(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return _to GetImageSrc(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgressMode(PRInt32 row, nsITreeColumn *col, PRInt32 *_retval NS_OUTPARAM) { return _to GetProgressMode(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellValue(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return _to GetCellValue(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellText(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return _to GetCellText(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *tree) { return _to SetTree(tree); } \
  NS_SCRIPTABLE NS_IMETHOD ToggleOpenState(PRInt32 index) { return _to ToggleOpenState(index); } \
  NS_SCRIPTABLE NS_IMETHOD CycleHeader(nsITreeColumn *col) { return _to CycleHeader(col); } \
  NS_SCRIPTABLE NS_IMETHOD SelectionChanged(void) { return _to SelectionChanged(); } \
  NS_SCRIPTABLE NS_IMETHOD CycleCell(PRInt32 row, nsITreeColumn *col) { return _to CycleCell(row, col); } \
  NS_SCRIPTABLE NS_IMETHOD IsEditable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) { return _to IsEditable(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSelectable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) { return _to IsSelectable(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCellValue(PRInt32 row, nsITreeColumn *col, const nsAString & value) { return _to SetCellValue(row, col, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetCellText(PRInt32 row, nsITreeColumn *col, const nsAString & value) { return _to SetCellText(row, col, value); } \
  NS_SCRIPTABLE NS_IMETHOD PerformAction(const PRUnichar * action) { return _to PerformAction(action); } \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnRow(const PRUnichar * action, PRInt32 row) { return _to PerformActionOnRow(action, row); } \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnCell(const PRUnichar * action, PRInt32 row, nsITreeColumn *col) { return _to PerformActionOnCell(action, row, col); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITREEVIEW(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRowCount(PRInt32 *aRowCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRowCount(aRowCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetSelection(nsITreeSelection * *aSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsITreeSelection *aSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD GetRowProperties(PRInt32 index, nsISupportsArray *properties) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRowProperties(index, properties); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellProperties(PRInt32 row, nsITreeColumn *col, nsISupportsArray *properties) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellProperties(row, col, properties); } \
  NS_SCRIPTABLE NS_IMETHOD GetColumnProperties(nsITreeColumn *col, nsISupportsArray *properties) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumnProperties(col, properties); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainer(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsContainer(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainerOpen(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsContainerOpen(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsContainerEmpty(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsContainerEmpty(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSeparator(PRInt32 index, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSeparator(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSorted(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSorted(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanDrop(index, orientation, dataTransfer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Drop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) { return !_to ? NS_ERROR_NULL_POINTER : _to->Drop(row, orientation, dataTransfer); } \
  NS_SCRIPTABLE NS_IMETHOD GetParentIndex(PRInt32 rowIndex, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParentIndex(rowIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasNextSibling(PRInt32 rowIndex, PRInt32 afterIndex, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasNextSibling(rowIndex, afterIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLevel(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLevel(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetImageSrc(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImageSrc(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgressMode(PRInt32 row, nsITreeColumn *col, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProgressMode(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellValue(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellValue(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCellText(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCellText(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetTree(nsITreeBoxObject *tree) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTree(tree); } \
  NS_SCRIPTABLE NS_IMETHOD ToggleOpenState(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToggleOpenState(index); } \
  NS_SCRIPTABLE NS_IMETHOD CycleHeader(nsITreeColumn *col) { return !_to ? NS_ERROR_NULL_POINTER : _to->CycleHeader(col); } \
  NS_SCRIPTABLE NS_IMETHOD SelectionChanged(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->SelectionChanged(); } \
  NS_SCRIPTABLE NS_IMETHOD CycleCell(PRInt32 row, nsITreeColumn *col) { return !_to ? NS_ERROR_NULL_POINTER : _to->CycleCell(row, col); } \
  NS_SCRIPTABLE NS_IMETHOD IsEditable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEditable(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsSelectable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSelectable(row, col, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetCellValue(PRInt32 row, nsITreeColumn *col, const nsAString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCellValue(row, col, value); } \
  NS_SCRIPTABLE NS_IMETHOD SetCellText(PRInt32 row, nsITreeColumn *col, const nsAString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCellText(row, col, value); } \
  NS_SCRIPTABLE NS_IMETHOD PerformAction(const PRUnichar * action) { return !_to ? NS_ERROR_NULL_POINTER : _to->PerformAction(action); } \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnRow(const PRUnichar * action, PRInt32 row) { return !_to ? NS_ERROR_NULL_POINTER : _to->PerformActionOnRow(action, row); } \
  NS_SCRIPTABLE NS_IMETHOD PerformActionOnCell(const PRUnichar * action, PRInt32 row, nsITreeColumn *col) { return !_to ? NS_ERROR_NULL_POINTER : _to->PerformActionOnCell(action, row, col); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTreeView : public nsITreeView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITREEVIEW

  nsTreeView();

private:
  ~nsTreeView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTreeView, nsITreeView)

nsTreeView::nsTreeView()
{
  /* member initializers and constructor code */
}

nsTreeView::~nsTreeView()
{
  /* destructor code */
}

/* readonly attribute long rowCount; */
NS_IMETHODIMP nsTreeView::GetRowCount(PRInt32 *aRowCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsITreeSelection selection; */
NS_IMETHODIMP nsTreeView::GetSelection(nsITreeSelection * *aSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTreeView::SetSelection(nsITreeSelection *aSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRowProperties (in long index, in nsISupportsArray properties); */
NS_IMETHODIMP nsTreeView::GetRowProperties(PRInt32 index, nsISupportsArray *properties)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getCellProperties (in long row, in nsITreeColumn col, in nsISupportsArray properties); */
NS_IMETHODIMP nsTreeView::GetCellProperties(PRInt32 row, nsITreeColumn *col, nsISupportsArray *properties)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getColumnProperties (in nsITreeColumn col, in nsISupportsArray properties); */
NS_IMETHODIMP nsTreeView::GetColumnProperties(nsITreeColumn *col, nsISupportsArray *properties)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isContainer (in long index); */
NS_IMETHODIMP nsTreeView::IsContainer(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isContainerOpen (in long index); */
NS_IMETHODIMP nsTreeView::IsContainerOpen(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isContainerEmpty (in long index); */
NS_IMETHODIMP nsTreeView::IsContainerEmpty(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSeparator (in long index); */
NS_IMETHODIMP nsTreeView::IsSeparator(PRInt32 index, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSorted (); */
NS_IMETHODIMP nsTreeView::IsSorted(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean canDrop (in long index, in long orientation, in nsIDOMDataTransfer dataTransfer); */
NS_IMETHODIMP nsTreeView::CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void drop (in long row, in long orientation, in nsIDOMDataTransfer dataTransfer); */
NS_IMETHODIMP nsTreeView::Drop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getParentIndex (in long rowIndex); */
NS_IMETHODIMP nsTreeView::GetParentIndex(PRInt32 rowIndex, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasNextSibling (in long rowIndex, in long afterIndex); */
NS_IMETHODIMP nsTreeView::HasNextSibling(PRInt32 rowIndex, PRInt32 afterIndex, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getLevel (in long index); */
NS_IMETHODIMP nsTreeView::GetLevel(PRInt32 index, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getImageSrc (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::GetImageSrc(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getProgressMode (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::GetProgressMode(PRInt32 row, nsITreeColumn *col, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getCellValue (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::GetCellValue(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getCellText (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::GetCellText(PRInt32 row, nsITreeColumn *col, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setTree (in nsITreeBoxObject tree); */
NS_IMETHODIMP nsTreeView::SetTree(nsITreeBoxObject *tree)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void toggleOpenState (in long index); */
NS_IMETHODIMP nsTreeView::ToggleOpenState(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cycleHeader (in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::CycleHeader(nsITreeColumn *col)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void selectionChanged (); */
NS_IMETHODIMP nsTreeView::SelectionChanged()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cycleCell (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::CycleCell(PRInt32 row, nsITreeColumn *col)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEditable (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::IsEditable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isSelectable (in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::IsSelectable(PRInt32 row, nsITreeColumn *col, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCellValue (in long row, in nsITreeColumn col, in AString value); */
NS_IMETHODIMP nsTreeView::SetCellValue(PRInt32 row, nsITreeColumn *col, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCellText (in long row, in nsITreeColumn col, in AString value); */
NS_IMETHODIMP nsTreeView::SetCellText(PRInt32 row, nsITreeColumn *col, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void performAction (in wstring action); */
NS_IMETHODIMP nsTreeView::PerformAction(const PRUnichar * action)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void performActionOnRow (in wstring action, in long row); */
NS_IMETHODIMP nsTreeView::PerformActionOnRow(const PRUnichar * action, PRInt32 row)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void performActionOnCell (in wstring action, in long row, in nsITreeColumn col); */
NS_IMETHODIMP nsTreeView::PerformActionOnCell(const PRUnichar * action, PRInt32 row, nsITreeColumn *col)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsINativeTreeView */
#define NS_INATIVETREEVIEW_IID_STR "46c90265-6553-41ae-8d39-7022e7d09145"

#define NS_INATIVETREEVIEW_IID \
  {0x46c90265, 0x6553, 0x41ae, \
    { 0x8d, 0x39, 0x70, 0x22, 0xe7, 0xd0, 0x91, 0x45 }}

class NS_NO_VTABLE nsINativeTreeView : public nsITreeView {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_INATIVETREEVIEW_IID)

  /* [noscript] void ensureNative (); */
  NS_IMETHOD EnsureNative(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsINativeTreeView, NS_INATIVETREEVIEW_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINATIVETREEVIEW \
  NS_IMETHOD EnsureNative(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINATIVETREEVIEW(_to) \
  NS_IMETHOD EnsureNative(void) { return _to EnsureNative(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINATIVETREEVIEW(_to) \
  NS_IMETHOD EnsureNative(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsureNative(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsNativeTreeView : public nsINativeTreeView
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSINATIVETREEVIEW

  nsNativeTreeView();

private:
  ~nsNativeTreeView();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsNativeTreeView, nsINativeTreeView)

nsNativeTreeView::nsNativeTreeView()
{
  /* member initializers and constructor code */
}

nsNativeTreeView::~nsNativeTreeView()
{
  /* destructor code */
}

/* [noscript] void ensureNative (); */
NS_IMETHODIMP nsNativeTreeView::EnsureNative()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITreeView_h__ */