// DARNELL JAMES V. ESTRADA
// CS 2360 SEC 01
// PROGRAM 4
// This is a Battleship program.

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class Battleship {
	private:
		struct Ship {
			char symbol;
			int LOA;
		};
		const int ROW = 15,
			COL = 15;
		char **grid;
		int size,
			length,
			sum,
			frigate,
			tender,
			destroyer,
			cruiser,
			carrier,
			*C;
		Ship *S;
		int direction();
		int RNG(int);
		void createGrid();
		void createShips();
		void placeShips();
		void removeShip(int);
		void printShip(char, int, int);
	public:
		Battleship();
		~Battleship();
		void key();
		void printGrid();
		void hitDetection(int, int);
		bool winner() const;
};

int Battleship::direction() {
	return RNG(4);
}

int Battleship::RNG(int n) {
	return rand() % n;
}

void Battleship::createGrid() {
	int x = 0,
		y = 0;
	grid = new char*[15];
	for (x = 0; x < ROW; x++) {
		grid[x] = new char[ROW];
		for (y = 0; y < COL; y++) {
			grid[x][y] = '+';
		}
	}
}

void Battleship::createShips() {
	int i = 0;
	S[0].symbol = 'F';
	S[1].symbol = 'T';
	S[2].symbol = 'D';
	S[3].symbol = 'c';
	S[4].symbol = 'C';
	S[0].LOA = frigate = 2;
	S[1].LOA = tender = 2;
	S[2].LOA = destroyer = 3;
	S[3].LOA = cruiser = 3;
	S[4].LOA = carrier = 4;
	length = 5;
}

void Battleship::placeShips() {
	char s = ' ';
	int num = 0,
		loa = -1,
		dir = -1,
		i = 0;
	for (i = size; i > 0; i--) {
		num = RNG(i);
		s = S[num].symbol;
		loa = S[num].LOA;
		dir = direction();
		printShip(s, loa, dir);
		removeShip(num);
	}
}

void Battleship::removeShip(int n) {
	int i = 0;
	for (i = n; i < length - 1; i++) {
		S[i] = S[i + 1];
	}
	length--;
}

void Battleship::printShip(char s, int loa, int d) {
	bool check = false;
	int x = RNG(ROW),
		y = RNG(COL),
		i = 0;
	switch (d) {
		case 0: {
			if (x - loa < 0) {
				printShip(s, loa, d);
			}
			else {
				for (i = 0; i < loa; i++) {
					if (grid[x - i][y] != '+') {
						check = true;
						break;
					}
				}
				if (check) {
					printShip(s, loa, d);
				}
				else {
					for (i = 0; i < loa; i++) {
						grid[x - i][y] = s;
					}
				}
			}
			break;
		}
		case 1: {
			if (y + loa > 15) {
				printShip(s, loa, d);
			}
			else {
				for (i = 0; i < loa; i++) {
					if (grid[x][y + i] != '+') {
						check = true;
						break;
					}
				}
				if (check) {
					printShip(s, loa, d);
				}
				else {
					for (i = 0; i < loa; i++) {
						grid[x][y + i] = s;
					}
				}
			}
			break;
		}
		case 2: {
			if (x + loa > 15) {
				printShip(s, loa, d);
			}
			else {
				for (i = 0; i < loa; i++) {
					if (grid[x + i][y] != '+') {
						check = true;
						break;
					}
				}
				if (check) {
					printShip(s, loa, d);
				}
				else {
					for (i = 0; i < loa; i++) {
						grid[x + i][y] = s;
					}
				}
			}
			break;
		}
		case 3: {
			if (y - loa < 0) {
				printShip(s, loa, d);
			}
			else {
				for (i = 0; i < loa; i++) {
					if (grid[x][y - i] != '+') {
						check = true;
						break;
					}
				}
				if (check) {
					printShip(s, loa, d);
				}
				else {
					for (i = 0; i < loa; i++) {
						grid[x][y - i] = s;
					}
				}
			}
			break;
		}
		default: {
			break;
		}
	}
}

Battleship::Battleship() {
	int i = 0;
	size = 5;
	length = sum = 0;
	C = new int[size];
	S = new Ship[size];
	for (i = 0; i < size; i++) {
		C[i] = 0;
	}
	srand((unsigned int)time(0));
	createGrid();
	createShips();
	placeShips();
}

Battleship::~Battleship() {
	int i = 0;
	delete[] C;
	delete[] S;
	for (i = 0; i < ROW; i++) {
		delete[] grid[i];
	}
	delete[] grid;
}

void Battleship::key() {
	cout << "\nF = FRIGATE"
		"\nT = TENDER"
		"\nD = DESTROYER"
		"\nc = CRUISER"
		"\nC = CARRIER"
		"\nX = HIT"
		"\nO = MISS";
}

void Battleship::printGrid() {
	int x = 0,
		y = 0;
	cout << "\n\n" << setw(4);
	for (y = 0; y < COL; y++) {
		cout << char(y + 65);
	}
	cout << endl << setw(4);
	for (y = 0; y < COL; y++) {
		cout << '_';
	}
	cout << endl;
	for (x = 0; x < ROW; x++) {
		cout << setw(2) << x + 1 << '|';
		for (y = 0; y < COL; y++) {
			cout << grid[x][y];
		}
		cout << "|\n" << setw(4);
	}
	for (y = 0; y < COL; y++) {
		cout << '-';
	}
}

void Battleship::hitDetection(int x, int y) {
	switch (grid[x][y]) {
		case '+': {
			grid[x][y] = 'O';
			cout << "MISS";
			break;
		}
		case 'X': case 'O': {
			cout << "MISS";
			break;
		}
		case 'F': {
			grid[x][y] = 'X';
			cout << "HIT";
			C[0]++;
			sum++;
			if (C[0] == frigate) {
				cout << "\nFRIGATE SUNK";
			}
			break;
		}
		case 'T': {
			grid[x][y] = 'X';
			cout << "HIT";
			C[1]++;
			sum++;
			if (C[1] == tender) {
				cout << "\nTENDER SUNK";
			}
			break;
		}
		case 'D': {
			grid[x][y] = 'X';
			cout << "HIT";
			C[2]++;
			sum++;
			if (C[2] == destroyer) {
				cout << "\nDESTROYER SUNK";
			}
			break;
		}
		case 'c': {
			grid[x][y] = 'X';
			cout << "HIT";
			C[3]++;
			sum++;
			if (C[3] == cruiser) {
				cout << "\nCRUISER SUNK";
			}
			break;
		}
		case 'C': {
			grid[x][y] = 'X';
			cout << "HIT";
			C[4]++;
			sum++;
			if (C[4] == carrier) {
				cout << "\nCARRIER SUNK";
			}
			break;
		}
		default: {
			break;
		}
	}
}

bool Battleship::winner() const {
	return sum == 14;
}

int main() {
	char y = ' ';
	int count = 0,
		x = 0;
	Battleship game;
	cout << "BATTLESHIP";
	while (true) {
		if (count == 60) {
			game.printGrid();
			game.key();
			cout << "\n\nYOU LOSE\n";
			break;
		}
		else if (game.winner()) {
			game.printGrid();
			game.key();
			cout << "\n\nYOU WIN\n";
			break;
		}
		cout << "\n\nX: ";
		cin >> x;
		cout << "Y: ";
		cin >> y;
		game.hitDetection(x - 1, int(y) - 65);
		count++;
	}
	cin.ignore();
	cin.get();
	return 0;
}