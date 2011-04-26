// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ListIteratorOfListOfInteractive_HeaderFile
#define _AIS_ListIteratorOfListOfInteractive_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_AIS_InteractiveObject_HeaderFile
#include <Handle_AIS_InteractiveObject.hxx>
#endif
#ifndef _Handle_AIS_ListNodeOfListOfInteractive_HeaderFile
#include <Handle_AIS_ListNodeOfListOfInteractive.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class AIS_ListOfInteractive;
class AIS_InteractiveObject;
class AIS_ListNodeOfListOfInteractive;



class AIS_ListIteratorOfListOfInteractive  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   AIS_ListIteratorOfListOfInteractive();
  
  Standard_EXPORT   AIS_ListIteratorOfListOfInteractive(const AIS_ListOfInteractive& L);
  
  Standard_EXPORT     void Initialize(const AIS_ListOfInteractive& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_AIS_InteractiveObject& Value() const;


friend class AIS_ListOfInteractive;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item Handle_AIS_InteractiveObject
#define Item_hxx <AIS_InteractiveObject.hxx>
#define TCollection_ListNode AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_hxx <AIS_ListNodeOfListOfInteractive.hxx>
#define TCollection_ListIterator AIS_ListIteratorOfListOfInteractive
#define TCollection_ListIterator_hxx <AIS_ListIteratorOfListOfInteractive.hxx>
#define Handle_TCollection_ListNode Handle_AIS_ListNodeOfListOfInteractive
#define TCollection_ListNode_Type_() AIS_ListNodeOfListOfInteractive_Type_()
#define TCollection_List AIS_ListOfInteractive
#define TCollection_List_hxx <AIS_ListOfInteractive.hxx>

#include <TCollection_ListIterator.lxx>

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


// other Inline functions and methods (like "C++: function call" methods)


#endif