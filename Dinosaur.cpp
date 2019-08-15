// DARNELL JAMES V. ESTRADA
// PROGRAM 6
// Dinosaur.cpp

#include "Dinosaur.h"

Dinosaur::Dinosaur() {
	this->height = 0.0;
	this->weight = 0.0;
	this->speed = 0.0;
	this->name = "Dinosaur";
	this->diet = "None";
	this->eating = "None";
	this->moving= "None";
	this->sleeping = "None";
}

Dinosaur::Dinosaur(double h, double w, double s, string n, string d, string eat, string move, string sleep) {
	this->height = h;
	this->weight = w;
	this->speed = s;
	this->name = n;
	this->diet = d;
	this->eating = eat;
	this->moving = move;
	this->sleeping = sleep;
}

void Dinosaur::setHeight(double h) {
	this->height = h;
}

void Dinosaur::setWeight(double w) {
	this->weight = w;
}

void Dinosaur::setSpeed(double s) {
	this->speed = s;
}

void Dinosaur::setName(string n) {
	this->name = n;
}

void Dinosaur::setDiet(string d) {
	this->diet = d;
}

void Dinosaur::setEating(string eat) {
	this->eating = eat;
}

void Dinosaur::setMoving(string move) {
	this->moving = move;
}

void Dinosaur::setSleeping(string sleep) {
	this->sleeping = sleep;
}

double Dinosaur::getHeight() const {
	return height;
}

double Dinosaur::getWeight() const {
	return weight;
}

double Dinosaur::getSpeed() const {
	return speed;
}

string Dinosaur::getName() const {
	return name;
}

string Dinosaur::getDiet() const {
	return diet;
}

string Dinosaur::getEating() const {
	return eating;
}

string Dinosaur::getMoving() const {
	return moving;
}

string Dinosaur::getSleeping() const {
	return sleeping;
}