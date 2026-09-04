#include <stdio.h>
#include <stdlib.h>


int charToInt(char c) {
	return (int)c - 48;
}


int readInt(int* isNotEOF) {
	char endChar = ' ';
	char input = getchar();
	int sign = 1;
	int sum = 0;
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

typedef struct SpojakIntType { int value; struct SpojakIntType* next; }spojakInt;
typedef struct SpojakIntHeadType { spojakInt* spojak; spojakInt* last; }spojakIntHead;



spojakInt createSpojakInt(int val) {
	spojakInt clanek;
	clanek.value = val;
	clanek.next = NULL;
	return clanek;
}

spojakIntHead createSpojakIntHead() {
	spojakIntHead head;
	head.spojak = NULL;
	head.last = NULL;
	return head;
}

void spojakAppend(spojakIntHead* head, spojakInt* clanek) {//pripoji novy prvek na konec spojaku
	if ((*head).spojak == NULL) {
		(*head).spojak = clanek;
		(*head).last = clanek;
	}
	else {
		(*(*head).last).next = clanek;
		(*head).last = clanek;
	}
}


void spojakInsert(spojakInt* clanek, spojakInt* insert) {//vlozi novy prvek insert za prvek clanek
	(*insert).next = (*clanek).next;
	(*clanek).next = insert;
}



void spojakSortInsert(spojakIntHead* head, spojakInt* clanek, spojakInt* insert) {
	if ((*clanek).value > insert->value && clanek == head->spojak) {// special case -> appenduji cislo mensi nez vsechna v seznamu
		insert->next = head->spojak;
		head->spojak = insert;
	}
	else if((*clanek).next == NULL) {// je-li posledni, jde o nejvetsi prvek
		spojakAppend(head, insert);

	}
	else if ((*(*clanek).next).value > (*insert).value){//je-li nasledujici hodnota vetsi, vloz
		spojakInsert(clanek, insert);
	}
	else {
		spojakSortInsert(head,(*clanek).next, insert);
	}
}

void spojakSortIn(spojakIntHead* head, spojakInt* clanek) {
	if (head->spojak == NULL) {// je-li prazdny, pouze pridej
		spojakAppend(head, clanek);
	}
	else {//je-li plny, zatrid
		spojakSortInsert(head, head->spojak, clanek);
	}


}



int main() {
	spojakIntHead head = createSpojakIntHead();
	spojakInt* newAdress;

	int* isNotEOF = (int*)malloc(sizeof(int));
	*isNotEOF = 1;
	int input;

	//logic
	while (((input = readInt(isNotEOF)) && 0) || *isNotEOF) {// loads input and decides whether it should continue
		newAdress = (spojakInt*)malloc(sizeof(spojakInt));
		*newAdress = createSpojakInt(input);
		spojakSortIn(&head, newAdress);
	}


	//Output print
	spojakInt* currentElement = head.spojak;
	if (currentElement == NULL) {//special case -> prazdny vstup
		return 0;
	}

	while (currentElement -> next != NULL) {
		printf("%d ", currentElement -> value);
		currentElement = currentElement -> next;
	}
	printf("%d ", currentElement->value);

	return 0;
}