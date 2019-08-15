// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 5
// This program practices using reference
// function calls and structure pointers
// to experiment with simple C++ structs
// and pointers.

#include <iostream>
#include <string>
using namespace std;

struct STUDENT
{
	char name[20];
	int id;
	int mark[3];
};

void InitStudent(STUDENT* StuPtr);
void printStudent(STUDENT* StuPtr);

void main()
{
	STUDENT stu;
	InitStudent(&stu);
	char student_name[20];
	int i;

	cout << "Your name, please: ";
	cin.getline(student_name, 20, '\n');   // input a string
	strcpy_s(stu.name, student_name);
	stu.id = 1999;
	cout << "Enter your marks for three tests." << endl;
	for (i=0; i < 3; i++) {
		cout << "Test " << i+1 << ": ";
		cin >> stu.mark[i];
	}

	cout << endl;
	cout << "Hello, " << stu.name << endl;
	cout << "Your Student ID is " << stu.id << endl;
	cout << "Your marks are: " << endl;
	for (i=0; i < 3; i++) {
		cout << "Test " << i+1 << ": " << stu.mark[i] << " " << endl;
	}
	printStudent(&stu);
	cin.ignore();
	cin.get();
}

void InitStudent(STUDENT* StuPtr) {
	int i = 0;
	strcpy_s(StuPtr->name, "Student");
	StuPtr->id = 0;
	for (i = 0; i < 3; i++) {
		StuPtr->mark[i] = 0;
	}
}

void printStudent(STUDENT* StuPtr) {
	int i = 0;
	cout << endl;
	cout << "Hello, " << StuPtr->name << endl;
	cout << "Your Student ID is " << StuPtr->id << endl;
	cout << "Your marks are: " << endl;
	for (i = 0; i < 3; i++) {
		cout << "Test " << i + 1 << ": " << StuPtr->mark[i] << " " << endl;
	}
}