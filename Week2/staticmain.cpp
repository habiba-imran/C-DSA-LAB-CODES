#include"Static.h"


bool isLeftParenthesis(char ch);
bool isRightParenthesis(char ch);
bool isOperator(char ch);
int precedence(char ch);
bool isBalanced(const string& expression);


int main() {
    int choice;
    cout << "1. Reverse a string\n";
    cout << "2. Check for parenthesis balancing\n";
    cout << "3. See pushed and popped items and value at top using seek\n";
    cout << "Enter your choice:\n";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        Stack s;
        string input;
        char character;
        cout << "Enter a string: ";
        getline(cin, input);
        for (char ch : input) {
            s.Push(ch);
        }
        cout << "Reversed string: ";
        while (!s.isEmpty()) {
            s.Pop(character);
            cout << character;
        }
        cout << endl;
    }
    else if (choice == 2) {
        Stack s;
        string expression;
        cout << "Enter a valid infix expression: ";
        getline(cin, expression);

        if (!isBalanced(expression)) {
            cout << "Error: Unbalanced parentheses in the expression.\n";
            return 1;
        }
        else {
            cout << "Your expression is balanced, proceeding further: \n\n";
        }
        string output = "";
        for (char ch : expression) {
            if (isdigit(ch) || isalpha(ch)) {
                output += ch;
            }
            else if (isLeftParenthesis(ch)) {
                s.Push(ch);
            }
            else if (isRightParenthesis(ch)) {
                char temp;
                while (!s.isEmpty() && !isLeftParenthesis(s.peek())) {
                    s.Pop(temp);
                    output += temp;
                }
                if (!s.isEmpty()) {
                    s.Pop(temp);
                }
            }
            else if (isOperator(ch)) {
                while (!s.isEmpty() && precedence(s.peek()) >= precedence(ch)) {
                    char temp;
                    s.Pop(temp);
                    output += temp;
                }
                s.Push(ch);
            }
        }

        char temp;
        while (!s.isEmpty()) {
            temp = s.peek();
            if (isLeftParenthesis(temp)) {
                s.Pop(temp);
                continue;
            }
            s.Pop(temp);
            output += temp;
        }

        cout << "Postfix expression: " << output << endl;
    }
    else if (choice == 3) {
        Stack s;
        char item;
        cout << "Pushed items: ";
        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (!s.isFull()) {
                s.Push(ch);
                cout << ch << " ";
            }
        }
        cout << "\nValue at top: " << s.peek() << endl;

        cout << "Popped Items: ";
        while (!s.isEmpty()) {
            s.Pop(item);
            cout << item << " ";
        }
        cout << endl;
    }


   
        

}
   
bool isLeftParenthesis(char ch) { return (ch == '{' || ch == '[' || ch == '('); }
bool isRightParenthesis(char ch) { return (ch == '}' || ch == ']' || ch == ')'); }
bool isOperator(char ch) { return (ch == '+' || ch == '-' || ch == '*' || ch == '/'); }

int precedence(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

bool isBalanced(const string& expression) {
    Stack s;
    for (char ch : expression) {
        if (isLeftParenthesis(ch)) {
            s.Push(ch);
        }
        else if (isRightParenthesis(ch)) {
            if (s.isEmpty()) return false;
            char temp;
            s.Pop(temp);
            if ((ch == '}' && temp != '{') || (ch == ']' && temp != '[') || (ch == ')' && temp != '(')) {
                return false;
            }
        }
    }
    return s.isEmpty();
}