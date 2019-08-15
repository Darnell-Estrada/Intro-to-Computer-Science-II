// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// Hadrosaur.cpp

#include "Hadrosaur.h"

Hadrosaur::Hadrosaur() {
	this->life = 0;
	this->mouth = "None";
}

Hadrosaur::Hadrosaur(int l, string m) {
	this->life = l;
	this->mouth = m;
}

void Hadrosaur::setLife(int l) {
	this->life = l;
}

void Hadrosaur::setMouth(string m) {
	this->mouth = m;
}

int Hadrosaur::getLife() const {
	return life;
}

string Hadrosaur::getMouth() const {
	return mouth;
}