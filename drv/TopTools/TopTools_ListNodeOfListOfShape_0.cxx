// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <TopTools_ListNodeOfListOfShape.hxx>

#include <Standard_Type.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>

 


IMPLEMENT_STANDARD_TYPE(TopTools_ListNodeOfListOfShape)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(TopTools_ListNodeOfListOfShape)


IMPLEMENT_DOWNCAST(TopTools_ListNodeOfListOfShape,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(TopTools_ListNodeOfListOfShape)


#define Item TopoDS_Shape
#define Item_hxx <TopoDS_Shape.hxx>
#define TCollection_ListNode TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_hxx <TopTools_ListNodeOfListOfShape.hxx>
#define TCollection_ListIterator TopTools_ListIteratorOfListOfShape
#define TCollection_ListIterator_hxx <TopTools_ListIteratorOfListOfShape.hxx>
#define Handle_TCollection_ListNode Handle_TopTools_ListNodeOfListOfShape
#define TCollection_ListNode_Type_() TopTools_ListNodeOfListOfShape_Type_()
#define TCollection_List TopTools_ListOfShape
#define TCollection_List_hxx <TopTools_ListOfShape.hxx>
#include <TCollection_ListNode.gxx>

