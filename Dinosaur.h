// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// Dinosaur.h

#ifndef DINOSAUR_H
#define DINOSAUR_H

#include <iostream>
#include <string>
using namespace std;

class Dinosaur {
	private:
		double height,
			weight,
			speed;
		string name,
			diet,
			eating,
			moving,
			sleeping;
	public:
		Dinosaur();
		Dinosaur(double, double, double, string, string, string, string, string);
		void setHeight(double);
		void setWeight(double);
		void setSpeed(double);
		void setName(string);
		void setDiet(string);
		void setEating(string);
		void setMoving(string);
		void setSleeping(string);
		double getHeight() const;
		double getWeight() const;
		double getSpeed() const;
		string getName() const;
		string getDiet() const;
		string getEating() const;
		string getMoving() const;
		string getSleeping() const;
};

#endif DINOSAUR_H