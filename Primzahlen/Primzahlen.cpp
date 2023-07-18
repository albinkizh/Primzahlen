#include <iostream>
#include <cmath>

double Start;
double End;

void Grid(int Start, int End) {
	system("CLS");
	std::cout << "--------------------------------" << std::endl;
	std::cout << "| From: " << Start << "             Till: " << End << "  |" << std::endl;
	std::cout << "--------------------------------\n" << std::endl;
}
void Gridfornumbers(int i) {
	std::cout << "----" << std::endl;
	std::cout << "|" << i << "|" << std::endl;
}
bool Primzahlchecker(int number) {
	if (number < 2) {
		return false;
	}

	int Wurzel = sqrt(number);
	for (int i = 2; i <= Wurzel; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}
int main() {
	Grid(Start, End);
	std::cin >> Start;
	Grid(Start, End);
	std::cin >> End;
	Grid(Start, End);

	for (int i = Start; i <= End; i++) {
		if (Primzahlchecker(i)) {
			Gridfornumbers(i);
		}
	}
}
