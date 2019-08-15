// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Human.h"

class Employee:public Human {
	private:
		int empID;
	public:
		Employee();
		Employee(int);
		Employee(int, int);
		void complain();
		void speak();
};

#endif EMPLOYEE_H