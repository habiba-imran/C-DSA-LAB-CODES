#include "Static.h"
Stack::Stack() {
    stack = new char[MAX_LIMIT];
    top = -1;
}

Stack::~Stack() {
    delete[] stack;
}

bool Stack::isFull() const { return (top == MAX_LIMIT - 1); }
bool Stack::isEmpty() const { return (top == -1); }

void Stack::Push(char character) {
    if (isFull()) { cerr << "Stack overloaded.\n"; exit(1); }
    stack[++top] = character;
}

void Stack::Pop(char& character) {
    if (isEmpty()) { cerr << "Stack underflow.\n"; exit(1); }
    character = stack[top--];
}

char Stack::peek() {
    if (isEmpty()) {
        cerr << "Stack is empty.\n";
        exit(1);
    }
    return stack[top];
}