#include<iostream>

/*
TODO:

Manager
	
	-printMaze
		- prints maze into console
		-dela nejaky bordel  - mozna prepisuji bludiste skrze pointer?

Dotazy
	-pri alokaci pameti pro string bludiste se alokuje vice pameti, nez by bylo treba



*/

class Maze {
	int width, height, entrance;
	char* mazeArr;

	char getState(int x, int y) {

		return mazeArr[x + width * y];
	}

	public:
	Maze(int w, int h, char* mazeArr0, int entrance0) {
		width = w;
		height = h;
		entrance = entrance0;
		mazeArr = mazeArr0;
	}
	int calcIndex(int x, int y) {
		//calculates index for a given coordinate
		return x + width * y;
	}

	char* peak(int x, int y){
		//returns surrounding of given coordinates
		static char surrounding[8];
		surrounding[0] = mazeArr[calcIndex(x + 1, y)];
		surrounding[1] = mazeArr[calcIndex(x + 1, y - 1)];
		surrounding[2] = mazeArr[calcIndex(x, y - 1)];
		surrounding[3] = mazeArr[calcIndex(x - 1, y - 1)];
		surrounding[4] = mazeArr[calcIndex(x - 1, y)];
		surrounding[5] = mazeArr[calcIndex(x - 1, y + 1)];
		surrounding[6] = mazeArr[calcIndex(x, y + 1)];
		surrounding[7] = mazeArr[calcIndex(x + 1, y + 1)];
		return surrounding;
	}

	char getEntranceState() {
		// returns beast (its direction) in maze and sets the entrance box on '.'
		char state = mazeArr[entrance];
		mazeArr[entrance] = '.';
		return state;
	}

	int* getDim() {
		static int dim[2] = { width, height };
		return dim;
	}

	int getEntrance() {
		return entrance;
	}

	char* getMaze() {
		return mazeArr;
	}
};

class Beast {
	int x,y,dir;//dir: 0 - >; 1 - ^; 2 - < ; 3 - v
	Maze* maze;

	void rot(int l) {
		//l=1 for left, l=-1 for right
		dir += l;
		dir %= 4;
	}
	
	void step() {
		switch (dir) {
			case 0:	x += 1; break;
			case 1:	y -= 1; break;
			case 2: x -= 1; break;
			case 3:	y += 1; break;
		}
	}

	public:
	Beast(int x0, int y0, int dir0, Maze* maze0) {
		x = x0;
		y = y0;
		dir = dir0;
		maze = maze0;
	}

	void move() {
		//make beast move
		char* surrounding = maze->peak(x, y);
		char relativeSurrounding[8];

		for (int i = 0; i < 8; i++) { // orients the beast such that 0th element is in front of it
			relativeSurrounding[i] = surrounding[(i + 2*dir) % 8];
		}

		if (relativeSurrounding[6] == '.') {// decision tree implementation
			if (relativeSurrounding[5] == '.') {
				if (relativeSurrounding[0] == '.') {
					step();
				}
				else {
					rot(1);
				}
			}
			else {
				rot(-1);
			}
		}
		else {
			if (relativeSurrounding[0] == '.') {
				step();
			}
			else {
				rot(1);
			}
		}
	}

	int* getStatus() {
		//returns position and orientation
		int* status = new int[3];
		status[0] = x;
		status[1] = y;
		status[2] = dir;
		return status;
	}

};

class Manager {
	int charToInt(char c) {
		return (int)c - 48;
	}

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

	char readNextCharWL(char* whitelist, int WLLength) {
		//reads next char that is on whitelist
		char newChar;
		bool matches = false;
		while (!matches) {
			newChar = getchar();
			for (int i = 0; i < WLLength; i++) {
				if (whitelist[i] == newChar) {
					matches = true;
					break;
				}
			}
		}
		return newChar;
	}


private:
	Maze* pMaze;
	Beast* pBeast;

	Maze* loadMaze(int w, int h) {
		//loads maze from console
		static char* mazeArr = (char*)malloc(w * h * sizeof(char));
		char whitelist[6] = { 'X','.','v','<','>','^' };
		int entrance;
		for (int i = 0; i < w*h; i++) {
			char state = readNextCharWL(whitelist, 6);
			mazeArr[i] = state;
			if (state != 'X' && state != '.') {//searcehs for entrance - beast starting posititon
				entrance = i;
			}
		}
		 Maze* m =  new Maze(w, h, mazeArr,entrance);
		 
		return m;
	}

	Beast* loadBeast(Maze* m) {
		//loads beast from console
		int w = m->getDim()[0];
		int ent = m->getEntrance();
		char startState = m->getEntranceState();

		int dir;
		switch (startState) {
			case '>': dir = 0; break;
			case '^': dir = 1; break;
			case '<': dir = 2; break;
			case 'v': dir = 3; break;
		}

		int x, y;
		x = ent % w;
		y = (ent - x) / w;


		Beast* b = new Beast(x, y, dir, m);
		return b;

		
	}

	void handleInput() {
		int w = readNextInt();
		int h = readNextInt();

		pMaze = loadMaze(w, h);
		pBeast = loadBeast(pMaze);

		
	}

	void printMaze() {
		char* output = pMaze->getMaze();
		int* beastStatus = pBeast->getStatus();

		char beastChar;

		switch (beastStatus[2]) {
		case 0: beastChar = '>'; break;
		case 1: beastChar = '^'; break;
		case 2: beastChar = '<'; break;
		case 3: beastChar = 'v'; break;
		}

		
		int* dim = pMaze->getDim();

		for (int y = 0; y < dim[1]; y++) {
			for (int x = 0; x < dim[0]; x++) {
				if (beastStatus[0] == x && beastStatus[1] == y) {
					std::cout << beastChar;
				}
				else {
					std::cout << output[x + y * dim[0]];
				}
			}
			std::cout << '\n';
		}
		std::cout << '\n';
	}


	public:
	Manager() {
		handleInput();
		
		for (int i = 0; i < 20; i++) {
			pBeast->move();
			printMaze();
		}
	}
};



int main() {
	Manager m;
	








	//wait sequence;
	char t;
	std::cin>>t;
	return 0;
}