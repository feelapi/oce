// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_ListOfAsciiString_HeaderFile
#define _TColStd_ListOfAsciiString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TColStd_ListNodeOfListOfAsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoSuchObject;
class TColStd_ListIteratorOfListOfAsciiString;
class TCollection_AsciiString;
class TColStd_ListNodeOfListOfAsciiString;



class TColStd_ListOfAsciiString 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_ListOfAsciiString();
  
  Standard_EXPORT TColStd_ListOfAsciiString(const TColStd_ListOfAsciiString& Other);
  
  Standard_EXPORT   void Assign (const TColStd_ListOfAsciiString& Other) ;
  void operator= (const TColStd_ListOfAsciiString& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Clear() ;
~TColStd_ListOfAsciiString()
{
  Clear();
}
  
      Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   void Prepend (const TCollection_AsciiString& I) ;
  
  Standard_EXPORT   void Prepend (const TCollection_AsciiString& I, TColStd_ListIteratorOfListOfAsciiString& theIt) ;
  
  Standard_EXPORT   void Prepend (TColStd_ListOfAsciiString& Other) ;
  
  Standard_EXPORT   void Append (const TCollection_AsciiString& I) ;
  
  Standard_EXPORT   void Append (const TCollection_AsciiString& I, TColStd_ListIteratorOfListOfAsciiString& theIt) ;
  
  Standard_EXPORT   void Append (TColStd_ListOfAsciiString& Other) ;
  
  Standard_EXPORT   TCollection_AsciiString& First()  const;
  
  Standard_EXPORT   TCollection_AsciiString& Last()  const;
  
  Standard_EXPORT   void RemoveFirst() ;
  
  Standard_EXPORT   void Remove (TColStd_ListIteratorOfListOfAsciiString& It) ;
  
  Standard_EXPORT   void InsertBefore (const TCollection_AsciiString& I, TColStd_ListIteratorOfListOfAsciiString& It) ;
  
  Standard_EXPORT   void InsertBefore (TColStd_ListOfAsciiString& Other, TColStd_ListIteratorOfListOfAsciiString& It) ;
  
  Standard_EXPORT   void InsertAfter (const TCollection_AsciiString& I, TColStd_ListIteratorOfListOfAsciiString& It) ;
  
  Standard_EXPORT   void InsertAfter (TColStd_ListOfAsciiString& Other, TColStd_ListIteratorOfListOfAsciiString& It) ;


friend class TColStd_ListIteratorOfListOfAsciiString;


protected:





private:



  Standard_Address myFirst;
  Standard_Address myLast;


};

#define Item TCollection_AsciiString
#define Item_hxx <TCollection_AsciiString.hxx>
#define TCollection_ListNode TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_hxx <TColStd_ListNodeOfListOfAsciiString.hxx>
#define TCollection_ListIterator TColStd_ListIteratorOfListOfAsciiString
#define TCollection_ListIterator_hxx <TColStd_ListIteratorOfListOfAsciiString.hxx>
#define Handle_TCollection_ListNode Handle_TColStd_ListNodeOfListOfAsciiString
#define TCollection_ListNode_Type_() TColStd_ListNodeOfListOfAsciiString_Type_()
#define TCollection_List TColStd_ListOfAsciiString
#define TCollection_List_hxx <TColStd_ListOfAsciiString.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TColStd_ListOfAsciiString_HeaderFile
