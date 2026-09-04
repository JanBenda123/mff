#include <stdio.h>
#include <stdlib.h>


int debug = 0;

int charToInt(char c) {
	return (int)c - 48;
}


int readIntf(FILE* file) {
	char endChar = ' ';
	char input = fgetc(file);
	int sign = 1;
	int sum = 0;


	while (input != endChar && input != '\n' && input != '\r' && input != EOF) {
		if (input == '-') {
			sign = -1;
			input = fgetc(file);
			continue;
		}
		if (sum == 0) {
			sum += charToInt(input);
		}
		else {
			sum *= 10;
			sum += charToInt(input);
		}
		input = fgetc(file);
	}



	sum *= sign;
	return sum;
}




int* emptyChessboard(int  height, int width) {
	int* chessboard = (int*)malloc(sizeof(int) * (width + 2) * (height + 2));
	for (int i = 0; i < (width + 2) * (height + 2); i++) {
		chessboard[i] = -1;
	}
	return chessboard;
}

int parseInput(char state) {
	switch (state) {
	case 'S':	return 0;
	case 'X':	return -1;
	case '.':	return -2;
	case 'C':	return -3;
	}
	return -42; //Something went wrong
}

void printChessboard(int* chessboard, int height, int width) {
	if (debug) {
		for (int y = 0; y <= height + 1; y++) {
			for (int x = 0; x <= width + 1; x++) {
				printf("%d ", chessboard[y * (width + 2) + x ]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int positionState(int* chessboard,int width, int x, int y) {
	return chessboard[y * (width + 2) + x];
}

void setState(int* chessboard, int width, int x, int y, int state) {
	chessboard[y * (width + 2) + x] = state;
}

int chessStep(int* chessboard, int height, int width) {
	/*
	return :	-1 if nothing changed (no path exists)
				0 if alg is still running
				>0 if alg has found a path
	*/

	printChessboard(chessboard, height, width);

	int changeOccured = 0;
	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= width; x++) {
			

			int currentPos = positionState(chessboard, width, x, y);
			int neighbourhood[9];
			int neighbourhoodMinimum = 2*width*height;

			if (!(currentPos == -2 || currentPos == -3)) {//if current pos is not C or '.'
				continue;
			}
			
			for (int i = 0; i < 9; i++) {// explores the nigbourhood
				neighbourhood[i] = positionState(chessboard, width, x + i / 3 - 1, y + i % 3 - 1);
			}
			for (int i = 0; i < 9; i++) {// finds the minimum
				if (0 <= neighbourhood[i] && neighbourhood[i]< neighbourhoodMinimum) {
					neighbourhoodMinimum = neighbourhood[i];
				}
			}
			if (neighbourhoodMinimum == 2 * width * height) {//no neighbour with assigned value
				continue;
			}
			if (currentPos == -3) {// C case
				return ++neighbourhoodMinimum;
			}
			if (currentPos == -2) {//. case
				
				setState(chessboard, width, x, y, ++neighbourhoodMinimum);
				changeOccured = 1;
			}
		}
	}

	if (changeOccured) {
		return 0;
	}
	return -1;
}




int main() {
	
	FILE* file = fopen("sachovnice.txt", "r");
	const int height = readIntf(file);
	const int width = readIntf(file);

	int* chessboard = emptyChessboard( height, width);
	/*
	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= width; x++) {
			chessboard[y* (width+2)+x+1] = parseInput(fgetc(file));
		}
		fgetc(file);
	}
	*/
	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= width; x++) {
			int parsed;
			if ((parsed = parseInput(fgetc(file))) != -42) {
				chessboard[y * (width + 2) + x] = parsed;
			}
			else {
				x--;
			}
		}
		fgetc(file);
	}

	int pathlength;

	while (!(pathlength = chessStep(chessboard, height, width))) {}
	printChessboard(chessboard, height, width);
	printf("%d", pathlength);



	

	
	

	return 0;
}