// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_HSequenceOfLight_HeaderFile
#define _Visual3d_HSequenceOfLight_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Visual3d_HSequenceOfLight.hxx>

#include <Visual3d_SequenceOfLight.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_Visual3d_Light.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Visual3d_Light;
class Visual3d_SequenceOfLight;



class Visual3d_HSequenceOfLight : public MMgt_TShared
{

public:

  
    Visual3d_HSequenceOfLight();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(Visual3d_Light)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(Visual3d_HSequenceOfLight)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(Visual3d_Light)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(Visual3d_HSequenceOfLight)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Visual3d_Light)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(Visual3d_HSequenceOfLight)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Visual3d_Light)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(Visual3d_HSequenceOfLight)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(Visual3d_HSequenceOfLight) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(Visual3d_Light)& anItem) ;
  
  Standard_EXPORT  const  Handle(Visual3d_Light)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(Visual3d_Light)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  Visual3d_SequenceOfLight& Sequence()  const;
  
      Visual3d_SequenceOfLight& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(Visual3d_HSequenceOfLight)

protected:




private: 


  Visual3d_SequenceOfLight mySequence;


};

#define Item Handle(Visual3d_Light)
#define Item_hxx <Visual3d_Light.hxx>
#define TheSequence Visual3d_SequenceOfLight
#define TheSequence_hxx <Visual3d_SequenceOfLight.hxx>
#define TCollection_HSequence Visual3d_HSequenceOfLight
#define TCollection_HSequence_hxx <Visual3d_HSequenceOfLight.hxx>
#define Handle_TCollection_HSequence Handle_Visual3d_HSequenceOfLight
#define TCollection_HSequence_Type_() Visual3d_HSequenceOfLight_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _Visual3d_HSequenceOfLight_HeaderFile
