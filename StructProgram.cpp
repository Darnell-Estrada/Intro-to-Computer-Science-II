// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Struct Program
// This program uses a struct.

#include <iostream>
#include <string>
using namespace std;

struct Person {
	string firstName,
		lastName;
	void setFirstName();
	string getFirstName() const;
};

void Person::setFirstName() {
	firstName = "Barb";
}

string Person::getFirstName() const {
	return firstName;
}

int main() {
	Person a,
		b,
		peeps[5],
		myStdPeeps[5],
		another;
	a.firstName = "Darnell";
	a.lastName = "Estrada";
	peeps[0].firstName = "Darnell";
	peeps[0].lastName = "Estrada";
	peeps[1].firstName = "a";
	myStdPeeps[2].setFirstName();
	another.setFirstName();
	cout << "peeps[0] name: " << peeps[0].firstName
		<< "\nanother name: " << another.getFirstName()
		<< "\nmyStdPeeps[2] name: " << myStdPeeps[2].getFirstName() << endl;
	cin.ignore();
	cin.get();
	return 0;
}