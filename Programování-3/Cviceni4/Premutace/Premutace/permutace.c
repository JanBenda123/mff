#include <stdio.h>
#include <stdlib.h>

typedef struct linkedListTemp { int val; struct linkedListTemp* next; } linkedList;

int fakeNull;

int charToInt(char c) {
	return (int)c - 48;
}

int long readInt(int* isNotEOF) {
	char endChar = ' ';
	char input = getchar();
	int sign = 1;
	int long sum = 0;
	if (input == '\n' || input == EOF) {//solves the empty input case
		*isNotEOF = 0;
		return 0;
	}



	while (input != endChar && input != '\n' && input != '\r' && input != EOF) {
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

	if (input == EOF) {//solves the empty input case
		*isNotEOF = 1;
		return 0;
	}

	sum *= sign;
	return sum;
}

int long fact(int n) {
	return (n == 0) ? 1 : n * fact(n - 1);
}

linkedList* createNumberList(int size) {
	linkedList* first = (linkedList*)malloc(sizeof(linkedList));
	linkedList* last = first;
	first->val = 0;
	for (int i = 1; i <= size; i++) {
		linkedList* newLink = (linkedList*)malloc(sizeof(linkedList));
		newLink->val = i;
		newLink->next = NULL;
		last->next = newLink;
		last = newLink;
	}
	return first;
}

linkedList* loadPerm(int size) {
	linkedList* first = (linkedList*)malloc(sizeof(linkedList));
	linkedList* last = first;
	first->val = 0;
	for (int i = 1; i <= size; i++) {
		linkedList* newLink = (linkedList*)malloc(sizeof(linkedList));
		newLink->val = readInt(&fakeNull);
		newLink->next = NULL;
		last->next = newLink;
		last = newLink;
	}
	return first;
}

int long findPermNumber(linkedList* perm,int size) {
	if (perm->next == NULL) {
		return 1;
	}
	linkedList* temp = perm;
	int firstVal = perm->val;
	int long lowerNum = 0; // the number of numbers lower than the first number of permutation
	while ((temp = temp->next) != NULL) {
		if (temp->val < firstVal) {
			lowerNum++;
		}
	}
	return lowerNum * fact(size) + findPermNumber(perm->next, size - 1); // recurence relation
}

void printList(linkedList* numberlist) {
	while ((numberlist = numberlist->next) != NULL) {
		printf("%d ", numberlist->val);
	}
}


linkedList* constructPermutation(int size, int permNum) {
	linkedList* unusedNumbers = createNumberList(size);
	linkedList* newPerm = createNumberList(size);
	int* facBase = (int*)malloc(size * sizeof(int));
	permNum--;

	int temp = permNum;
	for (int i = 0; i < size; i++) {// factorial base conversion
		facBase[size-1-i] = temp % (i + 1);
		temp /= i+1;
	}

	linkedList* permPlacePointer = newPerm->next;
	linkedList* tempUnusedNumbers;


	for (int i = 0; i < size; i++) {
		tempUnusedNumbers = unusedNumbers;

		int counter = facBase[i];
		while (!(counter == 0 && tempUnusedNumbers->val != 0)) {
			if (tempUnusedNumbers->val != 0) {
				counter--;
			}
			tempUnusedNumbers = tempUnusedNumbers->next;
		}
		permPlacePointer->val = tempUnusedNumbers->val;
		tempUnusedNumbers->val = 0;
		permPlacePointer = permPlacePointer->next;
	}
	return newPerm;
}

int main() {
	
	int size = readInt(&fakeNull);
	int long shift = readInt(&fakeNull);

	linkedList* perm = loadPerm(size);

	int newPermNum = findPermNumber(perm, size) + shift;

	printList(constructPermutation(size, newPermNum));

	return 0;
}