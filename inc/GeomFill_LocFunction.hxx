// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_LocFunction_HeaderFile
#define _GeomFill_LocFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_GeomFill_LocationLaw.hxx>
#include <TColgp_Array1OfVec.hxx>
#include <gp_Mat.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class GeomFill_LocationLaw;



class GeomFill_LocFunction 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomFill_LocFunction(const Handle(GeomFill_LocationLaw)& Law);
  
  //! compute the section for v = param
  Standard_EXPORT   Standard_Boolean D0 (const Standard_Real Param, const Standard_Real First, const Standard_Real Last) ;
  
  //! compute the first  derivative in v direction  of the
  //! section for v =  param
  Standard_EXPORT   Standard_Boolean D1 (const Standard_Real Param, const Standard_Real First, const Standard_Real Last) ;
  
  //! compute the second derivative  in v direction of the
  //! section  for v = param
  Standard_EXPORT   Standard_Boolean D2 (const Standard_Real Param, const Standard_Real First, const Standard_Real Last) ;
  
  Standard_EXPORT   void DN (const Standard_Real Param, const Standard_Real First, const Standard_Real Last, const Standard_Integer Order, Standard_Real& Result, Standard_Integer& Ier) ;




protected:





private:



  Handle(GeomFill_LocationLaw) myLaw;
  TColgp_Array1OfVec V;
  TColgp_Array1OfVec DV;
  TColgp_Array1OfVec D2V;
  gp_Mat M;
  gp_Mat DM;
  gp_Mat D2M;


};







#endif // _GeomFill_LocFunction_HeaderFile
