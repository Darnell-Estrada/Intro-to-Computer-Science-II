// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Kid.h

#ifndef KID_H
#define KID_H

#include "Human.h"

class Kid:public Human {
	private:
		int grade,
			year;
	public:
		Kid();
		Kid(int);
		void speak();
		void init(int);
		void setYear(int);
		int getYear() const;
	};

#endif KID_H