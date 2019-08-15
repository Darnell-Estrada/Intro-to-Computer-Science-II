// DARNELL JAMES V. ESTRADA
// PROGRAM 6
// TyrannosaurusRex.h

#ifndef TYRANNOSAURUSREX_H
#define TYRANNOSAURUSREX_H

#include "Dinosaur.h"

class TyrannosaurusRex:public Dinosaur {
	private:
		int teeth;
		string arms;
	public:
		TyrannosaurusRex();
		TyrannosaurusRex(int, string);
		void setTeeth(int);
		void setArms(string);
		int getTeeth() const;
		string getArms() const;
};

#endif TYRANNOSAURUSREX_H