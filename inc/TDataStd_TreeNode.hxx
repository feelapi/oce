// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_TreeNode_HeaderFile
#define _TDataStd_TreeNode_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataStd_TreeNode.hxx>

#include <TDataStd_PtrTreeNode.hxx>
#include <Standard_GUID.hxx>
#include <TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TDF_AttributeDelta.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Standard_OStream.hxx>
class TDataStd_ChildNodeIterator;
class TDF_Label;
class Standard_GUID;
class TDF_AttributeDelta;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Allows you to define an explicit tree of labels
//! which you can also edit.
//! Without this class, the data structure cannot be fully edited.
//! This service is required if for presentation
//! purposes, you want to create an application with
//! a tree which allows you to organize and link data
//! as a function of application features.
class TDataStd_TreeNode : public TDF_Attribute
{

public:

  
  //! class  methods working on the node
  //! ===================================
  //! Returns true if the tree node T is found on the label L.
  //! Otherwise, false is returned.
  Standard_EXPORT static   Standard_Boolean Find (const TDF_Label& L, Handle(TDataStd_TreeNode)& T) ;
  
  //! Finds or Creates a TreeNode attribute on the label <L>
  //! with  the  default tree  ID,   returned by the method
  //! <GetDefaultTreeID>.  Returns the created/found     TreeNode
  //! attribute.
  Standard_EXPORT static   Handle(TDataStd_TreeNode) Set (const TDF_Label& L) ;
  
  //! Finds  or Creates a   TreeNode attribute on  the label
  //! <L>, with an   explicit tree ID.  <ExplicitTreeID>  is
  //! the  ID   returned by    <TDF_Attribute::ID>   method.
  //! Returns the found/created TreeNode attribute.
  Standard_EXPORT static   Handle(TDataStd_TreeNode) Set (const TDF_Label& L, const Standard_GUID& ExplicitTreeID) ;
  
  //! returns a default  tree ID.  this  ID is  used by the
  //! <Set> method without explicit tree ID.
  //! Instance methods:
  //! ================
  Standard_EXPORT static  const  Standard_GUID& GetDefaultTreeID() ;
  
  Standard_EXPORT TDataStd_TreeNode();
  
  //! Insert the TreeNode <Child> as last  child of <me>. If
  //! the insertion is successful <me> becomes the Father of <Child>.
  Standard_EXPORT   Standard_Boolean Append (const Handle(TDataStd_TreeNode)& Child) ;
  
  //! Insert the   the TreeNode <Child>  as  first child of
  //! <me>. If the insertion is successful <me> becomes the Father of <Child>
  Standard_EXPORT   Standard_Boolean Prepend (const Handle(TDataStd_TreeNode)& Child) ;
  
  //! Inserts the TreeNode  <Node> before <me>. If insertion is successful <me>
  //! and <Node> belongs to the same Father.
  Standard_EXPORT   Standard_Boolean InsertBefore (const Handle(TDataStd_TreeNode)& Node) ;
  
  //! Inserts the TreeNode <Node>  after <me>. If insertion is successful  <me>
  //! and <Node> belongs to the same Father.
  Standard_EXPORT   Standard_Boolean InsertAfter (const Handle(TDataStd_TreeNode)& Node) ;
  
  //! Removes this tree node attribute from its father
  //! node. The result is that this attribute becomes a root node.
  Standard_EXPORT   Standard_Boolean Remove() ;
  
  //! Returns the depth of this tree node in the overall tree node structure.
  //! In other words, the number of father tree nodes of this one is returned.
  Standard_EXPORT   Standard_Integer Depth()  const;
  
  //! Returns the number of child nodes.
  //! If <allLevels> is true, the method counts children of all levels
  //! (children of children ...)
  Standard_EXPORT   Standard_Integer NbChildren (const Standard_Boolean allLevels = Standard_False)  const;
  
  //! Returns true if this tree node attribute is an
  //! ascendant of of. In other words, if it is a father or
  //! the father of a father of of.
  Standard_EXPORT   Standard_Boolean IsAscendant (const Handle(TDataStd_TreeNode)& of)  const;
  
  //! Returns true if this tree node attribute is a
  //! descendant of of. In other words, if it is a child or
  //! the child of a child of of.
  Standard_EXPORT   Standard_Boolean IsDescendant (const Handle(TDataStd_TreeNode)& of)  const;
  
  //! Returns true if this tree node attribute is the
  //! ultimate father in the tree.
  Standard_EXPORT   Standard_Boolean IsRoot()  const;
  
  //! Returns the ultimate father of this tree node attribute.
  Standard_EXPORT   Handle(TDataStd_TreeNode) Root()  const;
  
  //! Returns true if this tree node attribute is a father of of.
  Standard_EXPORT   Standard_Boolean IsFather (const Handle(TDataStd_TreeNode)& of)  const;
  
  //! Returns true if this tree node attribute is a child of of.
  Standard_EXPORT   Standard_Boolean IsChild (const Handle(TDataStd_TreeNode)& of)  const;
  
  //! Returns true if this tree node attribute has a father tree node.
      Standard_Boolean HasFather()  const;
  
  //! Returns the father TreeNode of <me>. Null if root.
  Standard_EXPORT   Handle(TDataStd_TreeNode) Father()  const;
  
  //! Returns true if this tree node attribute has a next tree node.
      Standard_Boolean HasNext()  const;
  
  //! Returns the next tree node in this tree node attribute.
  //! Warning
  //! This tree node is null if it is the last one in this
  //! tree node attribute.Returns the next TreeNode of <me>. Null if last.
  Standard_EXPORT   Handle(TDataStd_TreeNode) Next()  const;
  
  //! Returns true if this tree node attribute has a previous tree node.
      Standard_Boolean HasPrevious()  const;
  
  //! Returns the previous tree node of this tree node attribute.
  //! Warning
  //! This tree node is null if it is the first one in this tree node attribute.
  Standard_EXPORT   Handle(TDataStd_TreeNode) Previous()  const;
  
  //! Returns true if this tree node attribute has a first child tree node.
      Standard_Boolean HasFirst()  const;
  
  //! Returns the first child tree node in this tree node object.
  Standard_EXPORT   Handle(TDataStd_TreeNode) First()  const;
  
  //! Returns true if this tree node attribute has a last child tree node.
      Standard_Boolean HasLast()  const;
  
  //! Returns the last child tree node in this tree node object.
  Standard_EXPORT   Handle(TDataStd_TreeNode) Last() ;
  
  //! Returns the last child tree node in this tree node object.
  //! to set fields
  //! =============
  Standard_EXPORT   Handle(TDataStd_TreeNode) FindLast() ;
  
  Standard_EXPORT   void SetTreeID (const Standard_GUID& explicitID) ;
  
  Standard_EXPORT   void SetFather (const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT   void SetNext (const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT   void SetPrevious (const Handle(TDataStd_TreeNode)& F) ;
  
  Standard_EXPORT   void SetFirst (const Handle(TDataStd_TreeNode)& F) ;
  
  //! TreeNode callback:
  //! ==================
  Standard_EXPORT   void SetLast (const Handle(TDataStd_TreeNode)& F) ;
  
  //! Connect the TreeNode to its father child list
  Standard_EXPORT virtual   void AfterAddition() ;
  
  //! Disconnect the TreeNode from its Father child list
  Standard_EXPORT virtual   void BeforeForget() ;
  
  //! Reconnect the TreeNode to its father child list.
  Standard_EXPORT virtual   void AfterResume() ;
  
  //! Disconnect the TreeNode, if necessary.
  Standard_EXPORT virtual   Standard_Boolean BeforeUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Reconnect the TreeNode, if necessary.
  //! Implementation of Attribute methods:
  //! ===================================
  Standard_EXPORT virtual   Standard_Boolean AfterUndo (const Handle(TDF_AttributeDelta)& anAttDelta, const Standard_Boolean forceIt = Standard_False) ;
  
  //! Returns the tree ID (default or explicit one depending
  //! onthe Set method used).
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT virtual   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& aDataSet)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;


friend class TDataStd_ChildNodeIterator;


  DEFINE_STANDARD_RTTI(TDataStd_TreeNode)

protected:




private: 


  TDataStd_PtrTreeNode myFather;
  TDataStd_PtrTreeNode myPrevious;
  TDataStd_PtrTreeNode myNext;
  TDataStd_PtrTreeNode myFirst;
  TDataStd_PtrTreeNode myLast;
  Standard_GUID myTreeID;


};


#include <TDataStd_TreeNode.lxx>





#endif // _TDataStd_TreeNode_HeaderFile
