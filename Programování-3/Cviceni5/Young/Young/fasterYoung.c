#include <stdio.h>
#include <stdlib.h>

int charToInt(char c) {
	return (int)c - 48;
}

int coordToInd(int n, int k) { return n * (n - 1) / 2 + k - 1; }

long long* calculatedYoung;

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

long long youngOfSize(int n, int maxHeight) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	long long precalc = calculatedYoung[coordToInd(n, maxHeight)];
	if  (precalc!=-1) {
		return precalc;
	}


	long long sum = 0;
	for (int i = maxHeight; i > 0; i--) {
		sum += youngOfSize(n - i, (n - i > i) ? i: n-i);
	}
	calculatedYoung[coordToInd(n, maxHeight)] = sum;
	return sum;
}

int main() {
	int n = readNextInt();

	calculatedYoung = (long long*)malloc(n * (n + 1) / 2*sizeof(long long));
	for (int i = 0; i < n * (n + 1) / 2; i++) {
		calculatedYoung[i] = -1;
	}
	printf("%lld", youngOfSize(n, n));

}