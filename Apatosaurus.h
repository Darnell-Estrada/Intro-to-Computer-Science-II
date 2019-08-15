// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// Apatosaurus.h

#ifndef APATOSAURUS_H
#define APATOSAURUS_H

#include "Dinosaur.h"

class Apatosaurus:public Dinosaur {
	private:
		string neck,
			genus;
	public:
		Apatosaurus();
		Apatosaurus(string n, string g);
		void setNeck(string n);
		void setGenus(string g);
		string getNeck() const;
		string getGenus() const;
};

#endif APATOSAURUS_H