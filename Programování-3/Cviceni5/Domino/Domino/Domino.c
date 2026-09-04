#include <stdio.h>
#include <stdlib.h>

int charToInt(char c) {
	return (int)c - 48;
}

int maxFrom(int a, int b) {
	return a > b ? a : b;
}


int readNextInt() {
	char input = getchar();
	int sign = 1;
	int sum = 0;
	

	while (!((charToInt(input) >= 0 && charToInt(input) <= 9) || input == '-')) {
		input = getchar();
	}

	if (input == '-') {
		sign = -1;
		input = getchar();
		if (!(charToInt(input) >= 0 && charToInt(input) <= 9)) {
			return readNextInt();
		}
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

int findMaxLenghtRec(int* pieceList, int* usedPieces, int lastNum, int lenght, int pieceNumber) {

	int max = lenght;
	int temp;
	for (int i = 0; i < pieceNumber; i++) {
		if (usedPieces[i] == 0 && (pieceList[2*i]==lastNum || pieceList[2 *i+1] == lastNum)) {

			usedPieces[i] = 1;
			if (pieceList[2*i] == lastNum) {
				temp = findMaxLenghtRec(pieceList, usedPieces, pieceList[2*i+1], lenght + 1, pieceNumber);
			}
			else {
				temp = findMaxLenghtRec(pieceList, usedPieces, pieceList[2*i], lenght + 1, pieceNumber);
			}
			usedPieces[i] = 0;
			max = maxFrom(temp, max);
		}
	}
	return max;
}

int findMaxLenghtStart(int* pieceList, int* usedPieces, int pieceNumber) {
	int max = 0;
	int t1, t2;
	for (int i = 0; i < pieceNumber;i++) {
		usedPieces[i] = 1;
		t1 = findMaxLenghtRec(pieceList, usedPieces, pieceList[2*i], 1, pieceNumber);
		t2 = findMaxLenghtRec(pieceList, usedPieces, pieceList[2*i+1], 1, pieceNumber);
		usedPieces[i] = 0;
		max = maxFrom(max, t1);
		max = maxFrom(max, t2);
	}
	return max;
}




int main() {
	int pieceNumber = readNextInt();

	

	int* usedPieces = (int*)malloc(pieceNumber * sizeof(int));
	int* pieceList = (int*)malloc(pieceNumber * 2 * sizeof(int));


	for (int i = 0;i<pieceNumber;i++){
		usedPieces[i] = 0;
		pieceList[2*i] = readNextInt();
		pieceList[2*i+1] = readNextInt();
	}

	int maxLenght = findMaxLenghtStart(pieceList, usedPieces, pieceNumber);

	printf("%d", maxLenght);

	

	
	return 0;





	

}