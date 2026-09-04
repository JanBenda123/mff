#include <stdio.h>

void movePiece(int size, int from, int to) {
	printf("Kotouc %d z %d na %d\n", size, from, to);
}

void moveTower(int size,int from,int to) {
	int mid = 6 - from - to;// pozice prostredni tyce

	if (size == 1) {
		movePiece(1, from, to);
	}
	else {
		moveTower(size - 1, from, mid);
		movePiece(size, from, to);
		moveTower(size - 1, mid, to);
	}
}



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
	int n = readInt();
	moveTower(n, 1, 2);


	return 0;
}