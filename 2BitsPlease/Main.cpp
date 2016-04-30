#include <iostream>
#include <string>
#include "Main.h"

using namespace std;


string getBase(int number) {
	int currentBit = 1;
	int modulo;
	string bits = "";

	while (number >= 1) {
		modulo = number % 2;
		number = floor(number / 2);
		if (modulo == 1)
			bits += to_string(currentBit) + " ";
		currentBit = currentBit * 2;
	}

	return bits;
}

int main(int argc, char* argv[]) {
	int userValue;

	// Check the number of parameters
	if (argc < 2) {
		// Tell the user how to run the program
		std::cerr << "This program can run from command line" << endl;
		std::cerr << "Usage: " << argv[0] << " <NUMBER>" << std::endl;
		std::cerr << endl;

		cout << "Get base bits from this number: ";
		cin >> userValue;
		cout << getBase(userValue) << endl;

		return 0;
	}

	// process to run from command line argument(s)
	userValue = atoi(argv[1]);
	cout << getBase(userValue);

	return 0;
}
