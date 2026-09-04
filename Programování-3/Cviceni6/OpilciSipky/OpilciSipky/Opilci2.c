#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int debug = 0;

int charToInt(char c) {
	return (int)c - 48;
}

int minInt(int a, int b) { return(a > b ? b : a); }

int* initArray(int length, int initVal) {
	int* arr = (int*)malloc(length * sizeof(int));
	for (int i = 0; i < length; i++) {
		arr[i] = initVal;
	}
	return arr;
}

FILE* f;

int readNextInt() {
	char input = (debug ? fgetc(f) : getchar());
	int sign = 1;
	int sum = 0;


	while (!((charToInt(input) >= 0 && charToInt(input) <= 9) || input == '-')) {
		input = (debug ? fgetc(f) : getchar());
	}

	if (input == '-') {
		sign = -1;
		input = (debug ? fgetc(f) : getchar());
	}


	while (charToInt(input) >= 0 && charToInt(input) <= 9) {
		if (sum == 0) {
			sum += charToInt(input);
		}
		else {
			sum *= 10;
			sum += charToInt(input);
		}
		input = (debug ? fgetc(f) : getchar());
	}

	sum *= sign;
	return sum;
}



int* precalcGameStates;	// the smallest number of moves in optimal game (contains  -1 if it hasnt been calculated yet)

void precalcGameStatesInit(int* targets, int drunkPointsMax, int targetNum) {
	precalcGameStates = initArray(drunkPointsMax + 1, -1);

	for (int i = 0; i < targetNum; i++) {
		if (2 * targets[i] < drunkPointsMax + 1) {
			precalcGameStates[2 * targets[i]] = 2;
		}
		if (3 * targets[i] < drunkPointsMax + 1) {
			precalcGameStates[3 * targets[i]] = 2;
		}
	}

	for (int i = 0; i < drunkPointsMax+1; i++) {
		if (precalcGameStates[i] != -1) { continue; }

		int minPossibleMoves = INT_MAX-3;
		for (int j = 0; j < targetNum; j++) {
			int possiblePos = i - targets[j];
			if (possiblePos > 0 && precalcGameStates[possiblePos] + 1 < minPossibleMoves) {
				minPossibleMoves = precalcGameStates[possiblePos] + 1;
			}
		}

		for (int j = 0; j < targetNum; j++) {
			int possiblePos = i - 3*targets[j];
			if (possiblePos > 0 && precalcGameStates[possiblePos] + 2 < minPossibleMoves) {
				minPossibleMoves = precalcGameStates[possiblePos] + 2;
			}
		}
		precalcGameStates[i] = minPossibleMoves;
	}
}



int main() {
	if (debug) { f = fopen("testInputs/t1.txt", "r"); }


	int targetNum = readNextInt();								//# of targets
	int* targets = (int*)malloc(targetNum * sizeof(int));		//target values

	for (int i = 0; i < targetNum; i++) {
		targets[i] = readNextInt();
	}

	int drunkNum = readNextInt();								//# of drinkers
	int* drunkPoints = (int*)malloc(drunkNum * sizeof(int));	//# of pts each drinker has to hit
	int* minGameLength = (int*)malloc(drunkNum * sizeof(int));	//min game length of each Drinker

	for (int i = 0; i < drunkNum; i++) {
		drunkPoints[i] = readNextInt();
	}



	int drunkPointsMax = 0;
	for (int i = 0; i < drunkNum; i++) {
		if (drunkPointsMax < drunkPoints[i]) {
			drunkPointsMax = drunkPoints[i];
		}
	}
	precalcGameStatesInit(targets, drunkPointsMax, targetNum);

	for (int i = 0; i < drunkNum; i++) {
		if ((minGameLength[i] = precalcGameStates[drunkPoints[i]]) == INT_MAX - 3) {
			printf("Lumparna!");
			return 0;
		}
	}

	for (int _ = 0; _ < drunkNum; _++) {
		int minPoints = INT_MAX;
		int minPos;
		for (int i = 0; i < drunkNum; i++) {
			if (minGameLength[i] < minPoints) {
				minPos = i;
				minPoints = minGameLength[i];
			}
		}
		minGameLength[minPos] = INT_MAX;
		printf("%d\n", minPos+1);
	}





	return 0;
}