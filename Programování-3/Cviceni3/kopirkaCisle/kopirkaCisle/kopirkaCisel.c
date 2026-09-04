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



	while (input != endChar && input != '\n' && input != EOF) {
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


typedef struct queueEl_ { int value; struct queueEl_* prev; }queueEl; 
typedef struct queue_ { queueEl* first; queueEl* last; }queue;

queue createQueue() {
	queue q;
	q.first = NULL;
	q.last = NULL;
	return q;
}

queueEl createQueueEL(int val) {
	queueEl el;
	el.prev = NULL;
	el.value = val;
	return el;
}

void prepend(queue* q, queueEl* el) {
	if (q->first == NULL) {//SC - the queue is empty
		q->last = el;
	}
	else {
		(q->first)->prev = el;
	}
	q->first = el;
}

queueEl* pop(queue* q) {
	queueEl* last = q->last;
	if (q->last == q->first) {// last element popped
		q->first = NULL;
		q->last = NULL;
	}
	else {
		q->last = (q->last)->prev;
	}
	return last;
}



int main() {
	queue q1 = createQueue();
	queue q2 = createQueue();


	//read input
	queueEl* el;

	int* isNotEOF = (int*)malloc(sizeof(int));
	*isNotEOF = 1;
	int input;

	while (((input = readInt(isNotEOF)) && 0) || *isNotEOF) {
		el = (queueEl*)malloc(sizeof(queueEl));
		*el = createQueueEL(input);
		prepend(&q1, el);
	}

	//first print
	while (q1.first != NULL) {
		el = pop(&q1);
		printf("%d\n", el->value);
		prepend(&q2, el);
	}

	//second print
	while (q2.first != NULL) {
		el = pop(&q2);
		printf("%d\n", el->value);
	}
	 




	return 0;
}