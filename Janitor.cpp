// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Janitor.cpp

#include "Janitor.h"

Janitor::Janitor() {
	this->janID = 100;
	this->hours = 40;
}

Janitor::Janitor(int h) {
	this->hours = h;
}

Janitor::Janitor(int h, int e, int a):Employee(e, a) {
	this->hours = h;
}

void Janitor::speak() {
	cout << "I'm a Janitor.\n";
}

int Janitor::getHours() const {
	return hours;
}