// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Exception_IN_PAGE_ERROR_HeaderFile
#define _OSD_Exception_IN_PAGE_ERROR_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <OSD_Exception.hxx>
#include <Handle_OSD_Exception_IN_PAGE_ERROR.hxx>

#if !defined No_Exception && !defined No_OSD_Exception_IN_PAGE_ERROR
  #define OSD_Exception_IN_PAGE_ERROR_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) OSD_Exception_IN_PAGE_ERROR::Raise(MESSAGE);
#else
  #define OSD_Exception_IN_PAGE_ERROR_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_Exception_IN_PAGE_ERROR, OSD_Exception)

#endif // _OSD_Exception_IN_PAGE_ERROR_HeaderFile
