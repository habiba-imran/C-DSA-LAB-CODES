
#ifndef STATIC_H
#define STATIC_H

#include<iostream>
using namespace std;
#define MAX 10

template<class T>
class Queue {
    int front, rear, count;
    T queue[MAX];
public:
    Queue();
    ~Queue() {}
    bool isFull() const;
    bool isEmpty() const;
    void insert(T item);
    void remove(T& item);
};
template<class T>
Queue<T>::Queue() {
    count = 0;
    front = -1;
    rear = -1;
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
        cerr << "Queue overflow.";
        exit(1);
    }
    else if (front == -1) {
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
        front = -1;
        rear = -1;
    }
    else {
        front = (front + 1) % MAX;
    }
    count--;
}
#endif
