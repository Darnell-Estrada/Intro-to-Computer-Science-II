// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// Apatosaurus.cpp

#include "Apatosaurus.h"

Apatosaurus::Apatosaurus() {
	this->neck = "None";
	this->genus = "None";
}

Apatosaurus::Apatosaurus(string n, string g) {
	this->neck = n;
	this->genus = g;
}

void Apatosaurus::setNeck(string n) {
	this->neck = n;
}

void Apatosaurus::setGenus(string g) {
	this->genus = g;
}

string Apatosaurus::getNeck() const {
	return neck;
}

string Apatosaurus::getGenus() const {
	return genus;
}