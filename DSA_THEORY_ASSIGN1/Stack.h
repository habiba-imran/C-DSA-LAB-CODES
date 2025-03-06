#ifndef STACK_HEADER_H
#define STACK_HEADER_H
#include<iostream>
#include<string>
#include<algorithm>
#define MAX 500
using namespace std;
bool isOperand(char op);
bool isLeftParenthesis(char ch);
bool isRightParenthesis(char ch);
bool isOperator(char ch);
int setPrecedence(char op);
bool isValid(const string& expression);
string infixToPrefix(string infix);
string infixToPostfix(string infix);
string reversedStr(string str);
string swapParenthesis(string str);
int evaluatePostfix(const string& postfix);
template<class T>
class Stack {
	char* stack;
	int top;
public:
	Stack();
	~Stack();
	bool isEmpty();
	bool isFull();
	void Push(T ch);
	void Pop(T& ch);
	T Peek();
};
#endif