// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Structures
// This program uses structs.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Dog {
	float weight;
	int age,
		legs;
	string name;
};

struct Cat {
	int hiss,
		legs;
	string name;
};

int main () {
	int myInts[] = {10, 11, 12, 13, 14, 15};
	string name = "Darnell";
	Cat angry,
		tom;
	Dog moe,
		larry,
		curly;
	moe.name = "Moe";
	moe.age = 30;
	larry.name = "Larry";
	larry.age = 10;
	curly.name = "Curly";
	curly.age = 5;
	angry.hiss = 1;
	tom.hiss = 0;
	cout << "Moe is " << moe.age << " years old.\n";
	switch (angry.hiss) {
		case 0: {
			cout << "I'm happy.\n";
			break;
		}
		case 1: {
			cout << "I'm not happy.\n";
			break;
		}
		default: {
			break;
		}
	}
	cout << "name[1] = " << name[1] << endl;
	cin.ignore();
	cin.get();
	return 0;
}