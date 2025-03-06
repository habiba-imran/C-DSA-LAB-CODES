#ifndef PQUEUE_H
#define PQUEUE_H
#include "Queue.h"

template<class T>
class PQueue {
    Queue<T>* pQ;
    int LEVELS;
public:
    PQueue();
    PQueue(int levels);
    ~PQueue();
    bool IsFull() const;
    bool IsEmpty() const;
    void Insert(T item, int p);
    void Remove(T& item);
};

template<class T>
PQueue<T>::PQueue() {
    LEVELS = 10;
    pQ = new Queue<T>[LEVELS];
}

template<class T>
PQueue<T>::PQueue(int levels) {
    LEVELS = levels;
    pQ = new Queue<T>[LEVELS];
}

template<class T>
PQueue<T>::~PQueue() {
    delete[] pQ;
}

template<class T>
bool PQueue<T>::IsFull() const {
    for (int i = 0; i < LEVELS; i++) {
        if (!pQ[i].isFull()) {
            return false;
        }
    }
    return true;
}

template<class T>
bool PQueue<T>::IsEmpty() const {
    for (int i = 0; i < LEVELS; i++) {
        if (!pQ[i].isEmpty()) {
            return false;
        }
    }
    return true;
}

template<class T>
void PQueue<T>::Insert(T item, int p) {
    if (p < 0 || p >= LEVELS) {
        cerr << "Invalid priority level." << endl;
        return;
    }
    pQ[p].insert(item); //queue.h function 
}

template<class T>
void PQueue<T>::Remove(T& item) {
    for (int i = 0; i < LEVELS; i++) { 
        if (!pQ[i].isEmpty()) {
            pQ[i].remove(item);
            return;
        }
    }
    cerr << "Priority Queue underflow." << endl;
}

#endif
