// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Student.h

#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student:public Human {
	private:
		int studID;
	public:
		Student();
		void speak();
};

#endif STUDENT_H