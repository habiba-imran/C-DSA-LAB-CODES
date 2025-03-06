# Infix to Prefix and Postfix Expression Evaluation

This project is designed to convert an infix expression into both prefix and postfix notation and evaluate the result of the postfix expression using a stack-based approach.

## Features

- Convert a valid infix expression to a prefix expression.
- Convert a valid infix expression to a postfix expression.
- Evaluate a postfix expression and return the result.
- Handle different operators and parentheses.

## Files

- **main.cpp**: The main program that interacts with the user, takes an infix expression, validates it, converts it to prefix and postfix notations, and evaluates the postfix expression.
- **Stack.h**: Header file that contains the definition of a generic `Stack` class template and function declarations.
- **Stack.cpp**: Source file that contains the implementation of functions declared in `Stack.h`, including infix-to-prefix conversion, infix-to-postfix conversion, and postfix evaluation.

## Functions Overview

### `main.cpp`

- **main()**: This is the entry point of the program. It prompts the user to enter an infix expression, validates it, and then proceeds to convert it to prefix and postfix notations. The program also evaluates the postfix expression and outputs the result.

### `Stack.h`

- **isOperand(char op)**: Returns `true` if the character is a digit (operand).
- **isLeftParenthesis(char ch)**: Checks if the character is a left parenthesis.
- **isRightParenthesis(char ch)**: Checks if the character is a right parenthesis.
- **isOperator(char ch)**: Checks if the character is an operator (`+`, `-`, `*`, `/`, `^`).
- **setPrecedence(char op)**: Returns the precedence of the operator (`+`, `-`, `*`, `/`, `^`).
- **isValid(const string& expression)**: Checks if the infix expression has balanced parentheses.
- **infixToPrefix(string infix)**: Converts an infix expression to a prefix expression.
- **infixToPostfix(string infix)**: Converts an infix expression to a postfix expression.
- **evaluatePostfix(const string& postfix)**: Evaluates the result of a postfix expression.

### `Stack.cpp`

- **Stack**: A template class that implements a stack with basic operations like `Push`, `Pop`, and `Peek`.
- **reversedStr(string str)**: Reverses a given string.
- **swapParenthesis(string str)**: Swaps parentheses from `()` to `[]`, `{}`, and vice versa.

## Example Usage

### Input:
