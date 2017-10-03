//METHOD POP
#include "stack.hpp"

void foo_pop() {
	cout << endl << "RUN POP FILE..." << endl;
	Stack<double> DoubleArr;
	for(int i = 0; i < 10; i++) { DoubleArr.push(double(i)); }
		
	cout << "RESULT\t";
	for(int j = 0; j < 5; j++) { cout << DoubleArr.pop() << " "; }
	cout << endl << endl;
}

int main() {
	foo_pop();
}