// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// Hadrosaur.h

#ifndef HADROSAUR_H
#define HADROSAUR_H

#include "Dinosaur.h"

class Hadrosaur:public Dinosaur {
	private:
		int life;
		string mouth;
	public:
		Hadrosaur();
		Hadrosaur(int l, string m);
		void setMouth(string m);
		void setLife(int l);
		int getLife() const;
		string getMouth() const;
};

#endif HADROSAUR_H