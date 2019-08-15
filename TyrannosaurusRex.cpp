// DARNELL JAMES V. ESTRADA
// PROGRAM 6
// TyrannosaurusRex.cpp

#include "TyrannosaurusRex.h"

TyrannosaurusRex::TyrannosaurusRex() {
	this->teeth = 0;
	this->arms = "None";
}

TyrannosaurusRex::TyrannosaurusRex(int t, string a) {
	this->teeth = t;
	this->arms = a;
}

void TyrannosaurusRex::setTeeth(int t) {
	this->teeth = t;
}

void TyrannosaurusRex::setArms(string a) {
	this->arms = a;
}

int TyrannosaurusRex::getTeeth() const {
	return teeth;
}

string TyrannosaurusRex::getArms() const {
	return arms;
}