// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 7
// llist.h

/*************************************************
*   Purpose:  header file for llist.cpp
*************************************************/

typedef int Element_Type;

struct LinkNode;

typedef LinkNode* Node_Ptr;

struct LinkNode
{
	Element_Type data_member;
	Node_Ptr    link_member;
};