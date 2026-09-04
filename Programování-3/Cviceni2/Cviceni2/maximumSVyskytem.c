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


int main() {
	int listLength = readInt();
	int maxVal = 0;
	int maxLocations[1001];
	maxLocations[0] = -1;//znaci konec soucasneho seznamu. Abych nemusel vynulovat cely seznam

	int maxLocationsIndex = 0;
	int currentVal;

	for (int i = 1; i <= listLength; i++) {
		currentVal = readInt();
		if (currentVal < maxVal) {
			continue;
		}
		else if (currentVal == maxVal) {
			maxLocations[maxLocationsIndex] = i;
			maxLocations[maxLocationsIndex+1] = -1;
			maxLocationsIndex++;
		}
		else {
			maxVal = currentVal;
			maxLocationsIndex = 0;

			maxLocations[maxLocationsIndex] = i;
			maxLocations[maxLocationsIndex + 1] = -1;
			maxLocationsIndex++;
		}
	}

	printf("%d\n",maxVal);

	int i = 0;
	int val;
	while ((val = maxLocations[i++]) != -1) {
		printf("%d ", val);
	}
	printf("\n");

	


	return 0;
}