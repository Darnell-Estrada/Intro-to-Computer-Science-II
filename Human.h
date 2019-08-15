// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Human.h

#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
using namespace std;

class Human {
	private:
		char gender;
		int age;
		string name;
	public:
		Human();
		Human(char, int, string);
		void speak();
		void setGender(char);
		void setAge(int);
		void setName(string);
		void init(char, int, string);
		char getGender() const;
		int getAge() const;
		string getName() const;
};

#endif HUMAN_H