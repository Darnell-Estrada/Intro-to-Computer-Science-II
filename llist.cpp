// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 7
// llist.cpp
// This is a single linked list program.

/****************************************************
*  Purpose:
*          Demonstrate the use of basic operations
*          on a singly linked list.
*
********************************************************/

#include <iostream>
#include "llist.h"

using namespace std;

void PrintList(Node_Ptr Head);


/*****************  Main Function Starts Here ***********/
int main() {

	Node_Ptr	Head;
	Node_Ptr	NewNode_Ptr;
	Node_Ptr	Curr_Ptr;
	Node_Ptr	Prev_Ptr;
	Element_Type 	InValue;

	/*------------Create a linked list--------------------------*/


	cout << "Enter values for linked list, one per line." << endl
		<< "Enter 999 to end list." << endl;

	Head = new LinkNode;
	cin >> Head->data_member;
	Curr_Ptr = Head;

	cin >> InValue;

	while (InValue != 999)
	{
		NewNode_Ptr = new LinkNode;
		NewNode_Ptr->data_member = InValue;
		Curr_Ptr->link_member = NewNode_Ptr;
		Curr_Ptr = NewNode_Ptr;
		cin >> InValue;
	} // end while

	Curr_Ptr->link_member = NULL;	// mark the tail

	PrintList(Head);		// display the list

							/*------------Add a node to the linked list-------------------*/

	cout << "Enter a value for a new last node: ";
	cin >> InValue;

	/**************** ADD CODE HERE TO ADD A NODE TO THE
	END OF THE LINKED LIST  *********************/
	NewNode_Ptr = new LinkNode;
	NewNode_Ptr->data_member = InValue;
	NewNode_Ptr->link_member = NULL;
	if (!Head) {
		Head = NewNode_Ptr;
	}
	else {
		while (Curr_Ptr->link_member) {
			Curr_Ptr = Curr_Ptr->link_member;
		}
		Curr_Ptr->link_member = NewNode_Ptr;
		NewNode_Ptr->link_member = NULL;
	}

	cout << endl << "The list after the addition follows:" << endl;
	PrintList(Head);		// display the list

							/*------------Insert a node in linked list-------------------*/

	cout << "Enter the value of node to insert in the list: ";
	cin >> InValue;

	NewNode_Ptr = new LinkNode;
	NewNode_Ptr->data_member = InValue;

	Prev_Ptr = NULL;
	Curr_Ptr = Head;

	while ((Curr_Ptr != NULL) && (InValue > Curr_Ptr->data_member))
	{
		Prev_Ptr = Curr_Ptr;
		Curr_Ptr = Curr_Ptr->link_member;
	}

	if (Prev_Ptr == NULL)
		Head = NewNode_Ptr;
	else
		Prev_Ptr->link_member = NewNode_Ptr;


	NewNode_Ptr->link_member = Curr_Ptr;

	cout << endl << "The list after the insertion follows:" << endl;
	PrintList(Head);		// display the list



							/*------------Delete a node from linked list-------------------*/

	Node_Ptr	Del_Ptr;

	cout << "Enter the value of a node to delete: ";
	cin >> InValue;


	/************ ADD CODE HERE TO DELETE A NODE ***************/
	Curr_Ptr = Head;
	Del_Ptr = Prev_Ptr = NULL;
	if (Head->data_member == InValue) {
		Del_Ptr = Head;
		Head = Head->link_member;
	}
	else {
		while (Curr_Ptr->data_member != InValue) {
			Prev_Ptr = Curr_Ptr;
			Curr_Ptr = Curr_Ptr->link_member;
		}
		Del_Ptr = Curr_Ptr;
		Prev_Ptr->link_member = Curr_Ptr->link_member;
		Curr_Ptr = NULL;
	}
	delete Del_Ptr;

	cout << endl << "The list after the deletion follows:" << endl;
	PrintList(Head);		// display the list

	cin.ignore();
	cin.get();
	return 0;
} // end main
  /***********************************************************/


  /*---------------------------------------------------------
  *  Function Name: PrintList
  *  Parameters: 	  pointer to the head of a linked list
  *  Returns:	      nothing
  -----------------------------------------------------------*/

void PrintList(Node_Ptr Head) {

	Node_Ptr Curr_Ptr;
	Curr_Ptr = Head;	// this sets up a pointer to the Head

	cout << endl << "The list contains the following values." << endl;

	/**********  ADD A LOOP HERE TO PRINT OUT THE VALUES *******/
	while (Curr_Ptr) {
		cout << Curr_Ptr->data_member << " ";
		Curr_Ptr = Curr_Ptr->link_member;
	}
	cout << "\n\n";

} // end PrintList