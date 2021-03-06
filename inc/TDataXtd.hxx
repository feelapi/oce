// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataXtd_HeaderFile
#define _TDataXtd_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_OStream.hxx>
#include <TDataXtd_GeometryEnum.hxx>
#include <TDataXtd_ConstraintEnum.hxx>
class TDF_IDList;
class TDataXtd_Position;
class TDataXtd_Constraint;
class TDataXtd_Placement;
class TDataXtd_Geometry;
class TDataXtd_Point;
class TDataXtd_Axis;
class TDataXtd_Plane;
class TDataXtd_Pattern;
class TDataXtd_PatternStd;
class TDataXtd_Shape;
class TDataXtd_Array1OfTrsf;
class TDataXtd_HArray1OfTrsf;


//! This  package  defines  extension of standard attributes for
//! modelling  (mainly for work with geometry).
class TDataXtd 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Appends to <anIDList> the list of the attributes
  //! IDs of this package. CAUTION: <anIDList> is NOT
  //! cleared before use.
  //! Print of TDataExt enumeration
  //! =============================
  Standard_EXPORT static   void IDList (TDF_IDList& anIDList) ;
  
  //! Prints the name of the geometry dimension <GEO> as a String on
  //! the Stream <S> and returns <S>.
  Standard_EXPORT static   Standard_OStream& Print (const TDataXtd_GeometryEnum GEO, Standard_OStream& S) ;
  
  //! Prints the name of the constraint <CTR> as a String on
  //! the Stream <S> and returns <S>.
  Standard_EXPORT static   Standard_OStream& Print (const TDataXtd_ConstraintEnum CTR, Standard_OStream& S) ;




protected:





private:




friend class TDataXtd_Position;
friend class TDataXtd_Constraint;
friend class TDataXtd_Placement;
friend class TDataXtd_Geometry;
friend class TDataXtd_Point;
friend class TDataXtd_Axis;
friend class TDataXtd_Plane;
friend class TDataXtd_Pattern;
friend class TDataXtd_PatternStd;
friend class TDataXtd_Shape;
friend class TDataXtd_Array1OfTrsf;
friend class TDataXtd_HArray1OfTrsf;

};







#endif // _TDataXtd_HeaderFile
