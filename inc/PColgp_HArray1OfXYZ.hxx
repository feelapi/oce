// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_HArray1OfXYZ_HeaderFile
#define _PColgp_HArray1OfXYZ_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PColgp_HArray1OfXYZ.hxx>

#include <Standard_Integer.hxx>
#include <gp_XYZ.hxx>
#include <PColgp_FieldOfHArray1OfXYZ.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXYZ.hxx>
class Standard_OutOfRange;
class Standard_RangeError;
class gp_XYZ;
class PColgp_FieldOfHArray1OfXYZ;
class PColgp_VArrayNodeOfFieldOfHArray1OfXYZ;
class PColgp_VArrayTNodeOfFieldOfHArray1OfXYZ;


class PColgp_HArray1OfXYZ : public Standard_Persistent
{

public:

  
  Standard_EXPORT PColgp_HArray1OfXYZ(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PColgp_HArray1OfXYZ(const Standard_Integer Low, const Standard_Integer Up, const gp_XYZ& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const gp_XYZ& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   gp_XYZ Value (const Standard_Integer Index)  const;

PColgp_HArray1OfXYZ( )
{
  
}
PColgp_HArray1OfXYZ(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColgp_HArray1OfXYZLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColgp_HArray1OfXYZLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColgp_HArray1OfXYZUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColgp_HArray1OfXYZUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColgp_FieldOfHArray1OfXYZ& _CSFDB_GetPColgp_HArray1OfXYZData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColgp_HArray1OfXYZ)

protected:




private: 

  
  Standard_EXPORT   PColgp_FieldOfHArray1OfXYZ Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PColgp_FieldOfHArray1OfXYZ Data;


};

#define Item gp_XYZ
#define Item_hxx <gp_XYZ.hxx>
#define PCollection_FieldOfHArray1 PColgp_FieldOfHArray1OfXYZ
#define PCollection_FieldOfHArray1_hxx <PColgp_FieldOfHArray1OfXYZ.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColgp_VArrayNodeOfFieldOfHArray1OfXYZ.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColgp_VArrayTNodeOfFieldOfHArray1OfXYZ.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColgp_VArrayNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColgp_VArrayNodeOfFieldOfHArray1OfXYZ.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColgp_VArrayTNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColgp_VArrayTNodeOfFieldOfHArray1OfXYZ.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfXYZ_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXYZ
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColgp_VArrayNodeOfFieldOfHArray1OfXYZ_Type_()
#define PCollection_HArray1 PColgp_HArray1OfXYZ
#define PCollection_HArray1_hxx <PColgp_HArray1OfXYZ.hxx>
#define Handle_PCollection_HArray1 Handle_PColgp_HArray1OfXYZ
#define PCollection_HArray1_Type_() PColgp_HArray1OfXYZ_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PColgp_HArray1OfXYZ_HeaderFile
