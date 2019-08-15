// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Janitor.h

#ifndef JANITOR_H
#define JANITOR_H

#include "Employee.h"
#include "Kid.h"

class Janitor:public Employee, public Kid {
	private:
		int janID,
			hours;
	public:
		Janitor();
		Janitor(int);
		Janitor(int, int, int);
		void speak();
		int getHours() const;
};

#endif JANITOR_H