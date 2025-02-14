#include "dynamic.h"

int main() {
	int data; float value;
	Stack<int>intStack;
	Stack<float>floatStack;

	intStack.Push(35);
	floatStack.Push(3.14159);

	intStack.Pop(data); cout << data << endl;
	floatStack.Pop(value); cout << value << endl;
}