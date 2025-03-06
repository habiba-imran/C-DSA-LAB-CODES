#include "Stack.h"
bool isOperand(char op) { return (op >= '0' && op <= '9'); }
bool isLeftParenthesis(char ch) { return (ch == '{' || ch == '[' || ch == '('); }
bool isRightParenthesis(char ch) { return (ch == '}' || ch == ']' || ch == ')'); }
bool isOperator(char ch) { return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^'); }
int setPrecedence(char op) {
	if (op == '+' || op == '-')return 1;
	else if (op == '*' || op == '/')return 2;
	else if (op == '^') return 3;
	return 0;
}
string reversedStr(string str) {
	reverse(str.begin(), str.end());
	return str;
}
string swapParenthesis(string str) {
	for (int i = 0; i < str.length(); i++) {
		char ch = str[i];
		if (ch == '(') str[i] = ')';
		else if (ch == '{') str[i] = '}';
		else if (ch == '[') str[i] = ']';
		else if (ch == ')') str[i] = '(';
		else if (ch == ']') str[i] = '[';
		else if (ch == '}') str[i] = '{';
	}
	return str;
}
template<class T>
Stack<T>::Stack() {
	top = -1;
	stack = new char[MAX];
}
template<class T> Stack<T>::~Stack() { delete[] stack; }
template<class T> bool Stack<T>::isEmpty() { return (top == -1); }
template<class T> bool Stack<T>::isFull() { return (top == MAX - 1); }
template<class T>
void Stack<T>::Push(T ch) {
	if (isFull()) {
		cout << "Stack overflow.."; exit(1);
	}
	top++;
	stack[top] = ch;
}
template<class T>
void Stack<T>::Pop(T& ch) {
	if (isEmpty()) {
		cout << "Stack underflow.."; exit(1);
	}
	ch = stack[top];
	top--;
}
template<class T>
T Stack<T>::Peek() {
	if (isEmpty()) {
		return '\0';
	}
	return stack[top];
}
bool isValid(const string& expression) {
	Stack<char> s;
	for (char ch : expression) {
		if (isLeftParenthesis(ch)) {
			s.Push(ch);
		}
		else if (isRightParenthesis(ch)) {
			if (s.isEmpty()) {
				return false;
			}
			char temp;
			s.Pop(temp);
			if ((temp == '(' && ch != ')') ||
				(temp == '{' && ch != '}') ||
				(temp == '[' && ch != ']')) {
				return false;
			}
		}
	}
	return s.isEmpty();
}
string infixToPrefix(string infix) {
	Stack<char> s;
	string prefix = "";
	infix = reversedStr(infix);
	infix = swapParenthesis(infix);
	for (char ch : infix) {
		if (isOperand(ch)) {
			prefix += ch;
		}
		else if (isLeftParenthesis(ch)) {
			s.Push(ch);
		}
		else if (isRightParenthesis(ch)) {
			while (!s.isEmpty() && !isLeftParenthesis(s.Peek())) {
				prefix += s.Peek();
				char temp;
				s.Pop(temp);
			}
			char temp;
			s.Pop(temp); // Discard the '('
		}
		else if (isOperator(ch)) {
			while (!s.isEmpty() && setPrecedence(s.Peek()) >= setPrecedence(ch)) {
				prefix += s.Peek();
				char temp;
				s.Pop(temp);
			}
			s.Push(ch);
		}
	}
	while (!s.isEmpty()) {
		prefix += s.Peek();
		char temp;
		s.Pop(temp);
	}
	prefix = reversedStr(prefix);
	return prefix;
}
string infixToPostfix(string infix) {
	Stack<char> s;
	string postfix = "";
	for (char ch : infix) {
		if (isOperand(ch)) {
			postfix += ch;
		}
		else if (isLeftParenthesis(ch)) {
			s.Push(ch);
		}
		else if (isRightParenthesis(ch)) {
			char temp;
			while (!s.isEmpty() && !isLeftParenthesis(s.Peek())) {
				s.Pop(temp);
				postfix += temp;
			}
			s.Pop(temp);
		}
		else if (isOperator(ch)) {
			while (!s.isEmpty() && setPrecedence(s.Peek()) >= setPrecedence(ch)) {
				char temp;
				s.Pop(temp);
				postfix += temp;
			}
			s.Push(ch);
		}
	}
	char temp;
	while (!s.isEmpty()) {
		temp = s.Peek();
		if (isLeftParenthesis(temp)) {
			s.Pop(temp);
			continue;
		}
		s.Pop(temp);
		postfix += temp;
	}
	return postfix;
}
int evaluatePostfix(const string& postfix) {
	Stack<int> s;
	for (char ch : postfix) {
		if (isOperand(ch)) {
			s.Push(ch - '0');
		}
		else if (isOperator(ch)) {
			int operand2, operand1;
			s.Pop(operand2);
			s.Pop(operand1);
			switch (ch) {
			case '+': s.Push(operand1 + operand2); break;
			case '-': s.Push(operand1 - operand2); break;
			case '*': s.Push(operand1 * operand2); break;
			case '/': s.Push(operand1 / operand2); break;
			case '^': s.Push(pow(operand1, operand2)); break;
			}
		}
	}
	int result;
	s.Pop(result);
	return result;
}
