#ifndef LINKED_LIST_H
#define LINKED_LITS_H
#include<iostream>


template<class T>
class List {
protected:
	struct node {
		T info;
		struct node* next; //next is pointer to a node struct, self-referencing.
	};
	typedef struct node* NODEPTR; //NODEPTR is new name for struct* node;
	NODEPTR head; // this is the only data member of the class
public:
	List();
	~List();
	bool emptyList();
	void insertAfter(T oldValue, T newValue);
	void deleteItem(T oldValue);
	void push(T newvalue);
	T pop();
};

template<class T>
List<T>::List() {
	head = 0;
}
template<class T>
List<T>::~List() {
	NODEPTR p, q;
	if (emptyList()) {
		exit(0); // if list is empty, exit
	}
	for (p = head, q = p->next; p != 0; p = q, q = p->next) { // p assigned to head, and q assigned to next of p, means q will point to next to node pointed by p
		delete p; // q will be ahead of p, as soon as p will reach NULL, loop will terminate, at the end p->NULL, and q will be ahead of p, which may cause a problem.
	}
}
template<class T>
bool List<T>::emptyList() {
	return (head == 0); //true if list is empty, means no node, head not pointing to anyting.
}
template<class T>
void List<T>::insertAfter(T oldValue, T newValue) {
	NODEPTR p, q;
	for (p = head; p != 0 && p->info != oldValue; p = p->next) {} // here we are traversing p uptill the node after which there is oldvalue
	// e.g., if old value is in 3rd node, then at the end of loop, p will also be at 3rd node 
	if (p == 0) {
		std::cout << "Value sought not found in the list.";
		exit(1); //if old value is not in the list, p will be at NUll/0 at end of above for loop.
	}
	q = new node; // getting a new node from system and q points to it
	q->info = newValue; // add new value to the info part of node pointed by q
	q->next = p->next; // next of new node points to same node to which p is pointing at
	p->next = q; // p was pointing to same node to which new node's q was pointing, so now after this statement, p will point to q, 
	// new node will be added in this way.
}
template<class T>
void List<T>::deleteItem(T oldvalue) {
	NODEPTR p, q;
	for (p = head, q = 0; p != 0 && p->info != oldvalue; q = p, p = p->next) {
		// here p will be at the node containing old value, and q will be at the previous node.
	}
	if (p == 0) { // if p reaches null, and oldvalue is not in list -> exit
		std::cout << "Value sought is not in the list.";
		exit(1);
	}
	if (q == 0) { // condition was false initially, and p is at head -> only one node case.
		head = p->next; // 2nd node will be assigned head and p will be deleted.
	}
	else {
		q->next = p->next; // more than 1 nodes case, q was present before p, it will be assigned p->next, and p will be deleted from in between.
	}
	delete p;
}
template<class T>
void List<T>::push(T newValue) {
	NODEPTR p;
	p = new node;
	p->info = newValue;
	p->next = head;
	head = p;
}
template<class T>
T List<T>::pop() {
	NODEPTR p;
	T item_to_pop;
	if (emptyList()) {
		std::cout << "Error: The list is empty.";
		exit(1);
	}
	p = head;
	head = p->next;
	item_to_pop = p->info;
	delete p;
	return item_to_pop;
}
#endif