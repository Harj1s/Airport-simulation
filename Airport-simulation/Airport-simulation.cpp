#include <iostream>

void menu() {

	int input;

	std::cout << "Welcome to Airport-simulation" << std::endl;
	std::cout << "Which version would you like to run?" << std::endl;
	std::cout << "1: P1 | 2: P2 | 3: P3 | 4: P4 | 5: P5 | 6: Quit" << std::endl;
	std::cin >> input;

	if (input == 6) {
		std::cout << "Bye bye!" << std::endl;
		return;
	}
	else {
		std::cout << "To Do";
	}
}

int main() {

	menu();
}