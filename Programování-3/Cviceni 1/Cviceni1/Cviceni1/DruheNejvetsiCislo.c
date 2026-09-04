#include <stdio.h>

int charToInt(char c) {
	return (int)c - 48;
}


int readInt() {
	char endChar = ' ';
	char input = getchar();
	int sign = 1;
	int sum = 0;

	while (input != endChar && input!='\n') {
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

int main(){
	int input;
	int biggest = -1;
	int secondBiggest = -1;
	while ((input = readInt())!=-1) {
		if (biggest == -1) {//prvni iterace
			biggest = input;
			continue;
		}
		if (secondBiggest == -1) {//druha iterace
			if (input <= biggest) {
				secondBiggest = input;
			}
			else {
				secondBiggest = biggest;
				biggest = input;
			}
			continue;
		}
		if (input > biggest) {
			secondBiggest = biggest;
			biggest = input;
			continue;
		}
		if (input > secondBiggest) {// zde mui byt mensi nebo rovno doposud nejvetsimu
			secondBiggest = input;
		}
	}


	printf("%d\n", secondBiggest);
	return 0;
}