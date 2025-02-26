#ifndef DEQUE_H
#define DEQUE_H

#include<iostream>
#include<string>
using namespace std;

template<class T>
class DeQue {
    int MAX, front, rear, count;
    T* deque;
public:
    DeQue();
    DeQue(int);
    ~DeQue();
    bool isFull() const;
    bool isEmpty() const;
    void insertFront(T item);
    void insertRear(T item);
    void removeFront(T& item);
    void removeRear(T& item);
};
template<class T>
DeQue<T>::DeQue() {
    MAX = 100;
    front = rear = -1;
    count = 0;
    deque = new T[MAX];
}
template<class T>
DeQue<T>::DeQue(int max) {
    MAX = max;
    front = rear = -1;
    count = 0;
    deque = new T[MAX];
}
template<class T>
DeQue<T>::~DeQue() {
    delete[] deque;
}
template<class T>
bool DeQue<T>::isFull() const {
    return count == MAX;
}
template<class T>
bool DeQue<T>::isEmpty() const {
    return count == 0;
}
template<class T>
void DeQue<T>::insertFront(T item) {
    if (isFull()) {
        cerr << "Queue overflow.";
        exit(1);
    }
    if (front == -1) {
        front = rear = 0;
    }
    else if (front == 0) {
        front = MAX - 1;
    }
    else {
        front = front - 1;
    }
    deque[front] = item;
    count++;
}
template<class T>
void DeQue<T>::insertRear(T item) {
    if (isFull()) {
        cerr << "Queue overflow.";
        exit(1);
    }
    if (rear == -1) {
        rear = front = 0;
    }
    else if (rear == MAX - 1) {
        rear = 0;
    }
    else {
        rear = rear + 1;
    }
    deque[rear] = item;
    count++;
}
template<class T>
void DeQue<T>::removeFront(T& item) {
    if (isEmpty()) {
        cerr << "Queue underflow.";
        exit(1);
    }
    item = deque[front];
    count--;
    if (front == rear) {
        front = rear = -1;
    }
    else if (front == MAX - 1) {
        front = 0;
    }
    else {
        front = front + 1;
    }
}
template<class T>
void DeQue<T>::removeRear(T& item) {
    if (isEmpty()) {
        cerr << "Queue underflow.";
        exit(1);
    }
    item = deque[rear];
    count--;
    if (front == rear) {
        front = rear = -1;
    }
    else if (rear == 0) {
        rear = MAX - 1;
    }
    else {
        rear = rear - 1;
    }
}

#endif
