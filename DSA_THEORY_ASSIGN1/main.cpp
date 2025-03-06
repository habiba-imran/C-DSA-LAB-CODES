#include "Stack.h"
int main() {
	string infix;
	cout << "Enter a valid infix expression: ";
	getline(cin, infix);
	if (!isValid(infix)) {
		cerr << "Invalid infix expression entered...";
		exit(1);
	}
	cout << "\n\nValid infix expression entered, proceeding further..." << endl;
	string prefix = infixToPrefix(infix);
	cout << "\n\nThe prefix expression is: " << prefix << endl;
	string postfix = infixToPostfix(infix);
	cout << "\n\nThe postfix expression is: " << postfix << endl;
	int result = evaluatePostfix(postfix);
	cout << "\n\nThe result of expression is: " << result << endl;
	return 0;
}
