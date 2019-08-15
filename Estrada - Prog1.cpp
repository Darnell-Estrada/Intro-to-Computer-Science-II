// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Program 1
// This program provides the day of week for a given date
// (leap years are not taken into account).

#include <iostream>
using namespace std;

const long findDayOfWeek(double, double, double); //------------------------------------findDayOfWeek prototype

int main() { //-------------------------------------------------------------------------main function
	double month = 0.0, //--------------------------------------------------------------variable initializations
		day = 0.0,
		year = 0.0;
	long dayOfWeek = 0;
	cout << "Enter the month: "; //-----------------------------------------------------prompts
	cin >> month;
	cout << "Enter the day: ";
	cin >> day;
	cout << "Enter the year: ";
	cin >> year;
	cout << "Date: " << month << "/" << day << "/" << year << endl;
	dayOfWeek = findDayOfWeek(month, day, year); //-------------------------------------findDayofWeek function call
	cout << "The day of the week is "; //-----------------------------------------------prompt
	switch (dayOfWeek) { //-------------------------------------------------------------switch statement to display day
		case 0: {
			cout << "Sunday";
			break;
		}
		case 1: {
			cout << "Monday";
			break;
		}
		case 2: {
			cout << "Tuesday";
			break;
		}
		case 3: {
			cout << "Wednesday";
			break;
		}
		case 4: {
			cout << "Thursday";
			break;
		}
		case 5: {
			cout << "Friday";
			break;
		}
		case 6: {
			cout << "Saturday";
			break;
		}
		default:
			break;
	}
	cout << ".\n"; //-------------------------------------------------------------------period
	cin.ignore(); //--------------------------------------------------------------------ignore stream buffer
	cin.get(); //-----------------------------------------------------------------------pause screen
	return 0;
}

const long findDayOfWeek(double m, double d, double y) { //-----------------------------findDayOfWeek function
	double intRes1 = 0.0, //------------------------------------------------------------variable initializations
		intRes2 = 0.0,
		intRes3 = 0.0;
	long JDN = 0,
		dayOfWeek = 0;
	if (y > 1582 || (y == 1582 && m > 10) || (y == 1582 && m == 10 && d > 15)) { //-----case for date after 10.15.1582
		intRes1 = 2 - y / 100 + y / 400; //---------------------------------------------intermediate Result 1
	}
	intRes2 = 365.25 * y; //------------------------------------------------------------intermediate Result 2
	intRes3 = 30.6001 * (m + 1); //-----------------------------------------------------intermediate Result 3
	JDN = long(intRes1 + intRes2 + intRes3 + d + 1720994.5); //-------------------------Julian Day Number formula
	dayOfWeek = (JDN + 1) % 7; //-------------------------------------------------------dayOfWeek stores the JDN (0-6)
	return dayOfWeek; //----------------------------------------------------------------return dayOfWeek
}