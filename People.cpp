// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// People.cpp
// This program uses class derivation.

#include <iostream>
#include "Employee.h"
#include "Human.h"
#include "Janitor.h"
#include "Kid.h"
#include "Student.h"
#include "Teacher.h"

int main() {
	Human first,
		second('M', 35, "Bob");
	cout << "First human's name: " << first.getName()
		<< "\nFirst human's gender: " << first.getGender()
		<< "\nSecond human's gender: " << second.getGender();
	Kid firstKid,
		secondKid(5);
	cout << "\nFirst kid's name: " << firstKid.getName()
		<< "\nFirst kid's year: " << firstKid.getYear()
		<< "\nKid said: ";
	firstKid.speak();
	firstKid.init(15);

	///////////////////////////
	// Type Casting Example: //
	// int i = 1;            //
	// float f = (int)i;     //
	///////////////////////////
	
	Human h = (Human)firstKid;
	h.init('M', 20, "Bob");
	cout << "First kid's name: " << firstKid.getName();
	Employee employee,
		special(99),
		alsoSpecial(99, 36);
	Human human;
	Janitor janitor;
	Kid kid,
		*myKid = new Kid();
	Student student;
	Teacher teacher;
	cout << "\nSpecial Age: " << special.getAge()
		<< "\nAnother Special Age: " << alsoSpecial.getAge();
	Janitor newJanitor;
	cout << "\nNew Janitor's Hours: " << newJanitor.getHours();

	///////////////////////////////
	// Set Janitor's hours to 20 //
	// Set Employee's ID to 800  //
	// Set Human age to 40       //
	///////////////////////////////

	Janitor goodOne(20, 800, 40);
	cout << "\nNew Janitor's Hours: " << newJanitor.getHours() << endl;
	cin.ignore();
	cin.get();
	return 0;
}