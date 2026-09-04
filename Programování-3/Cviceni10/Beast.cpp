#include <iostream>
using namespace std;

class Spot {
public:
	int xcor, ycor;
	char inside;
	Spot* next;
	Spot(int xcor, int ycor, char inside, Spot* next) {
		this->xcor = xcor;
		this->ycor = ycor;
		this->inside = inside;
		this->next = next;
	}
};


class Board {
public:
	int lastmove;
	Spot* first,* next;

	Board(Spot* first, Spot* next, int lastmove) {
		this->lastmove = lastmove;
		this->first = first;
		this->next = next;
	}

	void create(int x, int y, Spot* start) {//nacte pole bludiste
		Spot* temp;
		string t;
		temp = start;
		for (int j = 0; j < y; ++j) {
			cin >> t;
			for (int i = 0; i < x; ++i) {
				temp->next = new Spot(i + 1, j + 1, t[i], NULL);
				temp = temp->next;
			}
		}
	}

	void write(int x, int y) {// vypise bludiste do konzole
		Spot* temp;
		temp = first;
		for (int j = 0; j < y; ++j) {
			for (int i = 0; i < x; ++i) {
				temp = temp->next;
				cout << temp->inside;
			}
			cout << '\n';
		}
		cout << '\n';
	}

	Spot* find(int x, int y) {
		Spot* temp;
		temp = first;
		while ((temp->xcor) != x || (temp->ycor) != y) {
			temp = temp->next;
		}
		return temp;
	}
	
	char checkright(int x, int y) {// vrati hodnotu napravo
		return find(x+1, y)->inside;
	}
	char checkleft(int x, int y) {
		return find(x - 1, y)->inside;
	}
	char checkdown(int x, int y) {
		return find(x, y+1)->inside;
	}
	char checkup(int x, int y) {
		return find(x, y-1)->inside;
	}

	void turnleft(int x, int y) {
		Spot* temp;
		temp = find(x, y);
		if (temp->inside == '^') {
			temp->inside = '<';
		}
		else if (temp->inside == '<') {
			temp->inside = 'v';
		}
		else if (temp->inside == 'v') {
			temp->inside = '>';
		}
		else if (temp->inside == '>') {
			temp->inside = '^';
		}
		lastmove = 0;
	}

	void turnright(int x, int y) {
		Spot* temp;
		temp = first;
		while ((temp->xcor) != x || (temp->ycor) != y) {
			temp = temp->next;
		}
		if (temp->inside == '^') {
			temp->inside = '>';
		}
		else if (temp->inside == '>') {
			temp->inside = 'v';
		}
		else if (temp->inside == 'v') {
			temp->inside = '<';
		}
		else if (temp->inside == '<') {
			temp->inside = '^';
		}
		lastmove = 0;
	}

	void move(int x, int y) {
		Spot* temp;
		temp = first;
		while ((temp->xcor) != x || (temp->ycor) != y) { // najde priseru v poli
			temp = temp->next;
		}
		if (temp->inside == '^') {
			temp->inside = '.';
			temp = first;
			while ((temp->xcor) != x || (temp->ycor + 1) != y) { //najde pole pred priserou
				temp = temp->next;
			}
			temp->inside = '^'; // nastavi pole pred priserou
		}
		else if (temp->inside == '>') {
			temp->inside = '.';
			temp = first;
			while ((temp->xcor - 1) != x || (temp->ycor) != y) {
				temp = temp->next;
			}
			temp->inside = '>';
		}
		else if (temp->inside == 'v') {
			temp->inside = '.';
			temp = first;
			while ((temp->xcor) != x || (temp->ycor - 1) != y) {
				temp = temp->next;
			}
			temp->inside = 'v';
		}
		else if (temp->inside == '<') {
			temp->inside = '.';
			temp = first;
			while ((temp->xcor + 1) != x || (temp->ycor) != y) {
				temp = temp->next;
			}
			temp->inside = '<';
		}
		lastmove = 1;
	}

	void nextmove() {
		char right, front;
		right = 'X';
		front = 'X';
		int x, y;
		Spot* temp;
		temp = first;
		while (temp->inside == '.' || temp->inside == 'X') {
			temp = temp->next;
		}
		x = temp->xcor;
		y = temp->ycor;
		if (temp->inside == '^') {
			right = checkright(x,y);
			front = checkup(x,y);
		}
		else if (temp->inside == '>') {
			right = checkdown(x, y);
			front = checkright(x, y);
		}
		else if (temp->inside == 'v') {
			right = checkleft(x, y);
			front = checkdown(x, y);
		}
		else if (temp->inside == '<') {
			right = checkup(x, y);
			front = checkleft(x, y);
		}
		if (front == 'X' && right == 'X') {
			turnleft(x, y);
		}
		else if (front == '.' && right == 'X') {
			move(x, y);
			
		}
		else if (right == '.' && lastmove == 0) {
			move(x, y);
		}
		else if (right == '.' && lastmove == 1) {
			turnright(x, y);
		}
	}

	void multiplemove(int x, int y, int moves) {
		for (int i = 0; i < moves; ++i) {
			nextmove();
			write(x, y);
		}
	}
};

class Beast {
public:
	int x, y, lastmove;
	Board* b;
	Beast(int x, int y, int lastmove, Board* b) {
		this->x = x;
		this->y = y;
		this->lastmove = lastmove;
		this->b = b;


	}


};

int main() {
	int x, y;
	Spot* start;
	Board* board;
	cin >> x;
	cin >> y;
	start = new Spot(x, y, 'X', NULL);
	board = new Board(start, NULL, 0);
	board->create(x, y, start);
	board->multiplemove(x, y, 20);
}
