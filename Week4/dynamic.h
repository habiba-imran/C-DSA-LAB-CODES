#ifndef DYNAMIC_H
#define DYNAMIC_H

#include<iostream>
using namespace std;

template<class T>
class Queue {
    int front, rear, count;
    T* queue;
    int MAX;
public:
    Queue();
    Queue(int);
    ~Queue();
    bool isFull() const;
    bool isEmpty() const;
    void insert(T item);
    void remove(T& item);
};
template<class T>
Queue<T>::Queue() {
    MAX = 500;
    count = 0;
    front = -1;
    rear = -1;
    queue = new T[MAX];
}
template<class T>
Queue<T>::~Queue() {
    delete[] queue;
}
template<class T>
Queue<T>::Queue(int max) {
    MAX = max;
    count = 0;
    front = -1;
    rear = -1;
    queue = new T[MAX];
}
template<class T>
bool Queue<T>::isFull() const {
    return (count == MAX);
}
template<class T>
bool Queue<T>::isEmpty() const {
    return (count == 0);
}
template<class T>
void Queue<T>::insert(T item) {
    if (isFull()) {
        cerr << "Queue overflow."; exit(1);
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = item;
    count++;
}
template<class T>
void Queue<T>::remove(T& item) {
    if (isEmpty()) {
        cerr << "Queue underflow."; exit(1);
    }
    item = queue[front];
    if (front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
    count--;
}
#endif
