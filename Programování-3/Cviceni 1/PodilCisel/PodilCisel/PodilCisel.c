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
	int divident = readInt();
	int divisor = readInt();
	if (divisor == 0) {
		printf("NELZE\n");
		return 0;
	}
	int q = divident / divisor;
	printf("%d\n", q);
	return 0;
}