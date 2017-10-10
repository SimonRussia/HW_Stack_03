//METHOD INIT
#include "stack.hpp"

void foo_init() {
	try {
		cout << endl << "INITIALIZING 3 INT-ARRAYS..." << endl << endl;
		Stack<int> IntArrA;
		Stack<int> IntArrB;
		Stack<int> IntArrC = Stack<int>(100); //  Переносим сзданный объект по rvalue ссылке в IntArrC.

		cout << "FILLING IntArrA ARRAY..." << endl << endl;
		for (int i = 0; i < 10; i++) {
			IntArrA.push(i);
		}

		cout << "COPY IntArrA INTO IntArrB..." << endl << endl;
		IntArrB = IntArrA; //  Копируем IntArrA в IntArrB.

		cout << "CLEANING IntArrA ARRAY..." << endl << "RESULT\t";
		while(IntArrA.empty()) {
			IntArrA.pop();
			cout << IntArrA.top() << " ";
		}
		cout << endl << endl;

		cout << "CLEANING IntArrB ARRAY..." << endl << "RESULT\t";
		while(IntArrB.empty()) {
			IntArrB.pop();
			cout << IntArrB.top() << " ";
		}
		cout << endl << endl;

	} catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	foo_init();
}