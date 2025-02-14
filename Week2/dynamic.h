#ifndef STATIC_FILE_H
#define STATIC_FILE_H

#include<iostream>
using namespace std;

template<class ItemType>
class Stack {
	int top;
	ItemType* stack;
	int max_stack;
public:
	Stack();
	Stack(int max);
	~Stack();
	bool isFull();
	bool isEmpty();
	void Push(ItemType item);
	void Pop(ItemType& item);
};
template<class ItemType>
Stack<ItemType>::Stack() {
	max_stack = 500;
	top = -1;
	stack = new ItemType[max_stack];
}
template<class ItemType>
Stack<ItemType>::Stack(int max) {
	max_stack = max;
	top = -1;
	stack = new ItemType[max_stack];
}
template<class ItemType>
Stack<ItemType>::~Stack() {
	delete[] stack;
}
template<class ItemType>
bool Stack<ItemType>::isEmpty() { return (top == -1); }
template<class ItemType>
bool Stack<ItemType>::isFull() { return (top == max_stack - 1); }
template<class ItemType>
void Stack<ItemType>::Push(ItemType item) {
	if (isFull()) { cout << "Stack overfilled."; exit(1); }
	top++;
	stack[top] = item;
}
template<class ItemType>
void Stack<ItemType>::Pop(ItemType& item) {
	if (isEmpty()) { cout << "Stack underfilled"; exit(1); }
	item = stack[top];
	top--;
}
#endif