// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Pointers
// This program uses pointers.

#include <iostream>
using namespace std;

struct Student {
	int age,
		weight;
};

void setStudentData(Student*);
void printPtr(int*);

int main() {
	int i = 200,
		*ptr1 = &i,
		*ptr2 = new int;
	Student student,
		*studentPtr = &student,
		*anotherStudentPtr = new Student;
	printPtr(ptr1);
	student.age = 21;
	student.weight = 100;
	setStudentData(studentPtr);
	cin.ignore();
	cin.get();
	return 0;
}

void setStudentData(Student *StudentPtr) {
	StudentPtr->age = 0;
	StudentPtr->weight = 0;
}

void printPtr(int *newPtr) {
	cout << "printPtr: newPtr =  "
		<< *newPtr << endl;
}