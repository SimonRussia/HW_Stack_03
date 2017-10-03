//METHOD EMPTY
#include "stack.hpp"

void foo_empty() {
	cout << endl << "RUN EMPTY FILE..." << endl;
	Stack<char> CharArr;

	char slovo[] = "NOITAREDEF_NAISSUR";

	for(int i = 0; i < sizeof(slovo); i++) { CharArr.push(slovo[i]); }

	cout << "RESULT\t";
	while(!CharArr.empty()) {
		cout << CharArr.pop() << " ";
	}
	cout << endl << endl;
}

int main() {
	foo_empty();
}
