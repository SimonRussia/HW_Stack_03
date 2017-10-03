//METHOD INIT
#include "stack.hpp"

void foo_init() {
	cout << endl << "RUN INIT FILE..." << endl;
	Stack<int> IntArr;
	Stack<char> CharArr;
	cout << "RESULT\t" << "Created 2 arrays: IntArr & CharArr." << endl << endl;
}

int main() {
	foo_init();
}