// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Human.cpp

#include "Human.h"

Human::Human() {
	this->name = "Adam";
	this->gender = 'F';
	this->age = 2000;
}

Human::Human(char g, int a, string n) {
	this->name = n;
	this->gender = g;
	this->age = a;
}

void Human::speak() {
	cout << "I'm a human\n";
}

void Human::setGender(char g) {
	this->gender = g;
}

void Human::setAge(int a) {
	this->age = a;
}

void Human::setName(string n) {
	this->name = n;
}

void Human::init(char g, int a, string n) {
	this->name = n;
	this->gender = g;
	this->age = a;
}

char Human::getGender() const {
	return gender;
}

int Human::getAge() const {
	return age;
}

string Human::getName() const {
	return name;
}