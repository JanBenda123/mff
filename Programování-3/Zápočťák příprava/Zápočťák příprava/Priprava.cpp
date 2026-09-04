#include <iostream>
#include <fstream>


bool debug = true;
std::fstream f("priprava.txt");

char read() {
	char ch;
	if (debug) {
		f >> ch;	
	}
	else {
		std::cin >> ch;
	}
	return ch;
}

int charToInt(char c) {
	return (int)c - 48;
}

int readNextInt() {
	char endChar = ' ';
	char input = getchar();
	int sign = 1;
	int sum = 0;

	while (!((charToInt(input) >= 0 && charToInt(input) <= 9) || input == '-')) {
		input = getchar();
	}

	if (input == '-') {
		sign = -1;
		input = getchar();

	}

	while (charToInt(input) >= 0 && charToInt(input) <= 9) {
		if (sum == 0) {
			sum += charToInt(input);
		}
		else {
			sum *= 10;
			sum += charToInt(input);
		}
		input = getchar();
	}

	sum *= sign;
	return sum;
}

char readNextCharWL(char* whitelist, int WLLength) {
	//reads next char that is on whitelist
	char newChar;
	bool matches = false;
	while (!matches) {
		newChar = read();
		for (int i = 0; i < WLLength; i++) {
			if (whitelist[i] == newChar) {
				matches = true;
				break;
			}
		}
	}
	return newChar;
}







int main() {

	int* test = (int*)malloc(10 * sizeof(int));

	for (int i = 0; i < 10; i++) {
		test[i] = i;
	}


	return 0;
}