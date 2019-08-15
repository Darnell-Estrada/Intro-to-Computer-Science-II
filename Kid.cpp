// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Kid.cpp

#include "Kid.h"

Kid::Kid() {
	this->year = 0;
}

Kid::Kid(int y) {
	this->year = y;
}

void Kid::speak() {
	cout << "I'm a kid.\n";
}

void Kid::init(int y) {
	this->year = y;
}

void Kid::setYear(int y) {
	this->year = y;
}

int Kid::getYear() const {
	return this->year;
}