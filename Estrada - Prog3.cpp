// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// Program 3
// This program uses a class to display a name and
// current salary, as well as calculate a new salary.

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Employee {
	private:
		double raise;
		int salary;
		string name;
	public:
		Employee();
		int newSalary();
		void setData(string n, int s, double r);
		int getSalary() const;
		string getName() const;
};

Employee::Employee() {
	name = "Name";
	salary = 0;
}

int Employee::newSalary() {
	double result = 0.0;
	if (raise < 0.0) {
		cout << "\nRaise percentage must be positive\n";
		return -1;
	}
	else {
		result = salary + (salary * raise);
		return int(result);
	}
}

void Employee::setData(string n, int s, double r) {
	name = n;
	salary = s;
	raise = r;
}

int Employee::getSalary() const {
	return salary;
}

string Employee::getName() const {
	return name;
}

int main() {
	double userRaise;
	int userSalary;
	string userName;
	Employee data;
	cout << "Enter full name: ";
	getline( cin, userName);
	cout << "Enter salary: ";
	cin >> userSalary;
	cout << "Enter raise percentage: ";
	cin >> userRaise;
	data.setData(userName, userSalary, userRaise);
	cout << "\nName: " << data.getName()
		<< "\nSalary: " << data.getSalary();
	if (int(data.newSalary()) >= 0) {
		cout << "\nNew Salary: " << int(data.newSalary()) << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}