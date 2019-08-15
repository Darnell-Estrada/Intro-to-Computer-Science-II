// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 6
// JurrasicPark.cpp
// This program practices class derivation.

#include "Apatosaurus.h"
#include "Dinosaur.h"
#include "Hadrosaur.h"
#include "TyrannosaurusRex.h"

void firstDino() {
	Dinosaur one(15.0, 19.8, 19.0, "Apatosaurus", "herbivorous", "medium", "slow", "heavy");
	cout << "\nName: " << one.getName()
		<< "\nHeight: " << one.getHeight() << " ft"
		<< "\nWeight: " << one.getWeight() << " tons"
		<< "\nSpeed: " << one.getSpeed() << " mph"
		<< "\nDiet: " << one.getDiet()
		<< "\nEating Behavior: " << one.getEating()
		<< "\nMoving Behavior: " << one.getMoving()
		<< "\nSleeping Behavior: " << one.getSleeping();
	Apatosaurus apato("long", "Diplodocidae");
	cout << "\n\nNeck Type: " << apato.getNeck()
		<< "\nGenus: " << apato.getGenus() << endl;
}

void secondDino() {
	Dinosaur two(40.0, 9.0, 45.0, "Tyrannosaurus Rex", "carnivorous", "heavy", "fast", "light");
	cout << "\nName: " << two.getName()
		<< "\nHeight: " << two.getHeight() << " ft"
		<< "\nWeight: " << two.getWeight() << " tons"
		<< "\nSpeed: " << two.getSpeed() << " mph"
		<< "\nDiet: " << two.getDiet()
		<< "\nEating Behavior: " << two.getEating()
		<< "\nMoving Behavior: " << two.getMoving()
		<< "\nSleeping Behavior: " << two.getSleeping();
	TyrannosaurusRex tyranno(60, "short");
	cout << "\n\nNumber of Teeth: " << tyranno.getTeeth()
		<< "\nArm length: " << tyranno.getArms() << endl;
}

void thirdDino() {
	Dinosaur three(14.0, 5.0, 28.0, "Hadrosaur", "herbivorous", "medium", "fast", "medium");
	cout << "\nName: " << three.getName()
		<< "\nHeight: " << three.getHeight() << " ft"
		<< "\nWeight: " << three.getWeight() << " tons"
		<< "\nSpeed: " << three.getSpeed() << " mph"
		<< "\nDiet: " << three.getDiet()
		<< "\nEating Behavior: " << three.getEating()
		<< "\nMoving Behavior: " << three.getMoving()
		<< "\nSleeping Behavior: " << three.getSleeping();
	Hadrosaur hadro(25, "Duck-billed");
	cout << "\n\nLife Span: " << hadro.getLife()
		<< "\nMouth Type: " << hadro.getMouth() << endl;
}

int main() {
	int i = 0;
	string dino = " ";
	do {
		for (i = 0; i < 59; i++) {
			cout << "_";
		}
		cout << "\nChoose a dinosaur in the list below to learn more about it.\n"
			<< "Apatosaurus\nTyrannosaurus Rex\nHadrosaur\n\nEnter dinosaur species: ";
		getline(cin,dino);
		if (dino == "Apatosaurus") {
			firstDino();
		}
		else if (dino == "Tyrannosaurus Rex") {
			secondDino();
		}
		else if (dino == "Hadrosaur") {
			thirdDino();
		}
		else if (dino != "Apatosaurus" || dino != "Tyrannosaurus Rex" || dino != "Hadrosaur") {
			cout << "\nName is unlisted\n";
		}
	} while (true);
	cin.ignore();
	cin.get();
	return 0;
}