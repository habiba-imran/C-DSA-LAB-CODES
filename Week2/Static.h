#ifndef STATIC_FILE_H
#define STATIC_FILE_H
#include<iostream>
#include<string>
using namespace std;
#define MAX_LIMIT 500

class Stack {
    int top;
    char* stack;
public:
    Stack();
    ~Stack();
    bool isFull() const;
    bool isEmpty() const;
    void Push(char character);
    void Pop(char& character);
    char peek();
};

#endif