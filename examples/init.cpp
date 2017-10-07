//METHOD INIT
#include "stack.hpp"

// void foo_init() {
// 	cout << endl << "RUN INIT FILE..." << endl;
// 	Stack<int> IntArr;
// 	Stack<char> CharArr;
// 	cout << "RESULT\t" << "Created 2 arrays: IntArr & CharArr." << endl << endl;
// }

void foo_init() {
	try {
	Stack<int> IntArrA;
	Stack<int> IntArrB;

	for (int i = 0; i < 10; i++) {
		IntArrA.push(i);
	}

	Stack<int> IntArrC = Stack<int>(100);

	cout << IntArrC.size() << endl;

	while(!IntArrA.empty()) {
			cout << IntArrA.pop() << " ";
		}
		cout << endl;

	while(!IntArrB.empty()) {
			cout << IntArrB.pop() << " ";
		}
		cout << endl << endl;
	} catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	foo_init();
}