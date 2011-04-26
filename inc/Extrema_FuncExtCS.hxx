// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_FuncExtCS_HeaderFile
#define _Extrema_FuncExtCS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Adaptor3d_CurvePtr_HeaderFile
#include <Adaptor3d_CurvePtr.hxx>
#endif
#ifndef _Adaptor3d_SurfacePtr_HeaderFile
#include <Adaptor3d_SurfacePtr.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_SequenceOfReal_HeaderFile
#include <TColStd_SequenceOfReal.hxx>
#endif
#ifndef _Extrema_SequenceOfPOnCurv_HeaderFile
#include <Extrema_SequenceOfPOnCurv.hxx>
#endif
#ifndef _Extrema_SequenceOfPOnSurf_HeaderFile
#include <Extrema_SequenceOfPOnSurf.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class Adaptor3d_Curve;
class Adaptor3d_Surface;
class math_Vector;
class math_Matrix;
class Extrema_POnCurv;
class Extrema_POnSurf;


//! Fonction permettant de rechercher les extrema de la <br>
//!          distance entre une courbe et une surface. <br>
class Extrema_FuncExtCS  : public math_FunctionSetWithDerivatives {
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

  
  Standard_EXPORT   Extrema_FuncExtCS();
  
  Standard_EXPORT   Extrema_FuncExtCS(const Adaptor3d_Curve& C,const Adaptor3d_Surface& S);
  //! sets the field mysurf of the function. <br>
  Standard_EXPORT     void Initialize(const Adaptor3d_Curve& C,const Adaptor3d_Surface& S) ;
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Integer NbEquations() const;
  //! Calcul de Fi(U,V). <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& UV,math_Vector& F) ;
  //! Calcul de Fi'(U,V). <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& UV,math_Matrix& DF) ;
  //! Calcul de Fi(U,V) et Fi'(U,V). <br>
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& UV,math_Vector& F,math_Matrix& DF) ;
  //! Memorise l'extremum trouve. <br>
  Standard_EXPORT   virtual  Standard_Integer GetStateNumber() ;
  //! Renvoie le nombre d'extrema trouves. <br>
  Standard_EXPORT     Standard_Integer NbExt() const;
  //! Renvoie la valeur de la Nieme distance. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Standard_Integer N) const;
  //! Renvoie le Nieme extremum sur C. <br>
  Standard_EXPORT    const Extrema_POnCurv& PointOnCurve(const Standard_Integer N) const;
  //! Renvoie le Nieme extremum sur S. <br>
  Standard_EXPORT    const Extrema_POnSurf& PointOnSurface(const Standard_Integer N) const;





protected:





private:

  
  Standard_EXPORT     Adaptor3d_SurfacePtr Bidon1() const;
  
  Standard_EXPORT     Adaptor3d_CurvePtr Bidon2() const;


Adaptor3d_CurvePtr myC;
Adaptor3d_SurfacePtr myS;
gp_Pnt myP1;
gp_Pnt myP2;
Standard_Real myt;
Standard_Real myU;
Standard_Real myV;
TColStd_SequenceOfReal mySqDist;
Extrema_SequenceOfPOnCurv myPoint1;
Extrema_SequenceOfPOnSurf myPoint2;
Standard_Boolean myCinit;
Standard_Boolean mySinit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif