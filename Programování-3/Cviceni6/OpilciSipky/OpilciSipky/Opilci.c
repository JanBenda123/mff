/*#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int debug = 1;

int charToInt(char c) {
	return (int)c - 48;
}

int minInt(int a, int b) { return(a>b?b:a);}

int* initArray(int length, int initVal) {
	int* arr = (int*)malloc(length * sizeof(int));
	for (int i = 0; i < length;i++) {
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



int* precalcGameStates;	// the smallest number of moves in optimal game 
						// (contains -2 if can finish a game from there and -1 if it hasnt been calculated yet)
						
int bestDrunkGame(int* targets, int points, int targetNum, int moves) {
	//returns the # of moves in the best game, 10000 if Lumparna
	if (precalcGameStates[points] > 0) {
		return precalcGameStates[points]; //already calculated
	}
	if (precalcGameStates[points] == -2) {
		return  moves + 2; //two moves to finish the game
	}

	int minPossible = 10000;
	int ptsAfterThrow;

	for (int i = 0; i < targetNum; i++) {// single throw
		ptsAfterThrow = points - targets[i];
		if (ptsAfterThrow >= 1) {
			minPossible = minInt(minPossible, bestDrunkGame(targets, ptsAfterThrow, targetNum, moves + 1));
		}
	}

	for (int i = 0; i < targetNum; i++) {// hit a triple before
		ptsAfterThrow = points - 3*targets[i];
		if (ptsAfterThrow >= 1) {
			minPossible = minInt(minPossible, bestDrunkGame(targets, ptsAfterThrow, targetNum, moves + 2));
		}
	}


	precalcGameStates[points] = minPossible;
	return precalcGameStates[points];
}

void precalcGameStatesInit(int* targets, int drunkPointsMax, int targetNum) {	
	precalcGameStates = initArray(drunkPointsMax +1, -1);

	for (int i = 0; i < targetNum; i++) {
		if (2 * targets[i] < drunkPointsMax) {
			precalcGameStates[2 * targets[i]] = -2;
		}
		if (3 * targets[i] < drunkPointsMax) {
			precalcGameStates[3 * targets[i]] = -2;
		}
	}
}



int main_() {
	if(debug){ f = fopen("testInputs/t1.txt", "r"); }
	

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
		if(drunkPointsMax<drunkPoints[i]){
			drunkPointsMax = drunkPoints[i];
		}
	}
	precalcGameStatesInit(targets, drunkPointsMax, targetNum);


	for (int i = 0; i < drunkNum; i++) {
		minGameLength[i] = bestDrunkGame(targets, drunkPoints[i], targetNum, 0);
	}





	return 0;
}*/