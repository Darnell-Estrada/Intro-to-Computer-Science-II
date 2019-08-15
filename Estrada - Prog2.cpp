// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Program 2
// This program enables a user to manage student information.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student {
	int ID = 0;
	double GPA = 0.0;
	string firstName = " ",
		lastName = " ";
};

void menu();
void find(Student[], int);
void update(Student[], int);
void view(Student[], int);

int main() {
	const int MAX = 6;
	char choice = ' ',
		userID = 0;
	Student info[MAX];
	info[0].ID = 100057823;
	info[0].GPA = 3.84;
	info[0].firstName = "Chandler";
	info[0].lastName = "Bing";
	info[1].ID = 100067236;
	info[1].GPA = 3.56;
	info[1].firstName = "Phoebe";
	info[1].lastName = "Buffay";
	info[2].ID = 100054209;
	info[2].GPA = 4.00;
	info[2].firstName = "Monica";
	info[2].lastName = "Geller";
	info[3].ID = 100057267;
	info[3].GPA = 3.99;
	info[3].firstName = "Ross";
	info[3].lastName = "Geller";
	info[4].ID = 100056234;
	info[4].GPA = 2.72;
	info[4].firstName = "Rachel";
	info[4].lastName = "Green";
	info[5].ID = 100062344;
	info[5].GPA = 2.53;
	info[5].firstName = "Joey";
	info[5].lastName = "Tribbiani";
	do {
		cout << "[MQUV]: ";
		cin >> choice;
		switch (choice) {
			case 'M': case 'm': {
				menu();
				break;
			}
			case 'Q': case 'q': {
				exit(0);
				break;
			}
			case 'U': case 'u': {
				find(info, MAX);
				break;
			}
			case 'V': case 'v': {
				view(info, MAX);
				break;
			}
			default: {
				cout << choice << " is not a valid menu option.\n";
				break;
			}
		}
	} while (true);
	cin.ignore();
	cin.get();
	return 0;
}

void menu() {
	cout << "M: Menu\nQ: Quit\nU: Update\nV: View\n";
}

void view(Student i[], int m) {
	int count = 0,
		line = 0;
	for (count = 0; count < m; count++) {
		for (line = 0; line < 20; line++) {
			cout << "_";
		}
		cout << "\nID: " << i[count].ID
			<< "\nGPA: " << setprecision(2) << fixed << i[count].GPA
			<< "\nFirst Name: " << i[count].firstName
			<< "\nLast Name: " << i[count].lastName << endl;
	}
	for (line = 0; line < 20; line++) {
		cout << "_";
	}
	cout << endl;
}

void find(Student i[], int m) {
	int studentID = 0;
	do {
		cout << "Enter ID: ";
		cin >> studentID;
		switch (studentID) {
			case 100057823: {
				update(i, 0);
				break;
			}
			case 100067236: {
				update(i, 1);
				break;
			}
			case 100054209: {
				update(i, 2);
				break;
			}
			case 100057267: {
				update(i, 3);
				break;
			}
			case 100056234: {
				update(i, 4);
				break;
			}
			case 100062344: {
				update(i, 5);
				break;
			}
			default: {
				cout << "ID does not exist\n";
				find(i, m);
				break;
			}
		}
		return;
	} while (true);
}

void update(Student i[], int n) {
	cout << "Enter new GPA: ";
	cin >> i[n].GPA;
	cout << "Enter new first name: ";
	cin >> i[n].firstName;
	cout << "Enter new last name: ";
	cin >> i[n].lastName;
}