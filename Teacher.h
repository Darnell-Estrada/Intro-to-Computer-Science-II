// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Teacher.h

#ifndef TEACHER_H
#define TEACHER_H

#include "Human.h"

class Teacher:public Human {
	private:
		int teachID;
	public:
		Teacher();
		void speak();
};

#endif TEACHER_ID