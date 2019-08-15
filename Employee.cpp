// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Human.cpp

#include "Employee.h"

Employee::Employee() {
	this->empID = 200;
}

Employee::Employee(int e) {
	this->empID = e;
}

Employee::Employee(int e, int a) {
	this->empID = e;
}

void Employee::complain() {
	cout << "I'm filing a complaint on a fellow employee. Give me a raise.\n";
}

void Employee::speak() {
	cout << "I'm an employee.\n";
}