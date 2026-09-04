#include <stdio.h>

int charToInt(char c) {
	return (int)c - 48;
}


int readInt() {
	char endChar = ' ';
	char input = getchar();
	int sign = 1;
	int sum = 0;

	while (input != endChar && input != '\n') {
		if (input == '-') {
			sign = -1;
			input = getchar();
			continue;
		}
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

int checkProperties(int num) {
	if (num == 1) {
		printf("CK\n");
		return 0;
	}

	int isSquare = 0;
	int isCube = 0;
	int intSqrt = 0;
	int calcSquare = 0;


	while ((calcSquare = intSqrt * intSqrt) < num) {//kontroluje je-li cislo ctverec a hleda horni celociselny odhad odmocniny
		if (calcSquare * intSqrt == num) {//kontroluje rovnou je-li cislo krychle. Lze, nebot treti odmocnina je mensi nez druha odmocnina
			isCube = 1;
		}
		intSqrt++;
	}
	if (calcSquare == num) {
		isSquare = 1;
	}



	int perfectSum = 0;
	int divisorCheckLimit = intSqrt;


	if (isSquare) { //nekontroluje odmocninu z cisla - je treba ji zapocitat
		perfectSum = intSqrt;
	}

	for (int i = 1; i < divisorCheckLimit; i++) {
		if (num % i == 0) {
			perfectSum += i;
			perfectSum += num / i;
		}
	}
	perfectSum -= num;

	if (perfectSum == num) {
		printf("P");
	}
	if (isSquare) {
		printf("C");
	}
	if (isCube) {
		printf("K");
	}
	printf("\n");
	return 0;
}


int main(){
	
	int num = readInt();
	checkProperties(num);
	
	return 0;
}