#include<iostream>

using namespace std;

int min(int a, int b) {
	return a < b ? a : b;
}


class Container {
	public:

		int capacity;
		int volume;
		Container(int  cap, int vol) {
			capacity = cap;
			volume = vol;

		}
		void fill(Container target) {
			int volMoved = min(volume, target.capacity - target.volume);
			volume -= volMoved;
			target.volume += volMoved;
		}
};

class StateMatrix {
	int states[11*11*11];
	public:
		int getState(int x, int y, int z) {
			return states[x + y * 11 + z * 121];
	
		}
		void setState(int x, int y, int z, int value) {
			states[x + y * 11 + z * 121] = value;
		}
};

class Event {};





int main() {








	return 0;
}