#include<iostream>
using namespace std;
template<class T>
class DoublyLL {
	struct node {
		T info;
		struct node* prev;
		struct node* next;
	};
	typedef struct node* NODEPTR;
	NODEPTR head;
public:
	DoublyLL();
	~DoublyLL();
	void display();
	void insertStart(T item);
	void deleteStart();
	void insertEnd(T item);
	void deleteEnd();
	void insertBetween(T oldvalue, T newvalue);
};
template<class T>
DoublyLL<T>::DoublyLL() {
	head = NULL;
}
template<class T>
DoublyLL<T>::~DoublyLL() {
	NODEPTR p = head;
	while (p != NULL) {
		NODEPTR temp = p;
		p = p->next;
		delete temp;
	}
	head = NULL;
}
template<class T>
void DoublyLL<T>::insertStart(T item) {
	NODEPTR p = new node;
	p->info = item;
	p->prev = NULL;
	p->next = head;
	if (head != NULL) { //if there is another node in the list
		head->prev = p;
	}
	head = p;
}
template<class T>
void DoublyLL<T>::display() {
	if (head == NULL) {
		cout << "The list is empty.\n";
		return;
	}
	NODEPTR p = head;
	int i = 1;
	while (p != NULL) {
		cout << "NODE " << i << ": " << p->info << endl;
		p = p->next;
		i++;
	}
}
template<class T>
void DoublyLL<T>::deleteStart() {
	if (head == NULL) {
		cout << "The list is empty." << endl;
		return;
	}
	NODEPTR p = head;
	head = p->next;
	if (head != NULL) {
		head->prev = NULL;
	}
	delete p;
}
template<class T>
void DoublyLL<T>::insertEnd(T item) {
	NODEPTR p = new node;
	p->info = item;
	p->next = NULL;
	if (head == NULL) {
		p->prev = NULL;
		head = p;
		return;
	}
	NODEPTR temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	p->prev = temp;
	temp->next = p;
}
template<class T>
void DoublyLL<T>::deleteEnd() {
	if (head == NULL) {
		cout << "The list is empty." << endl;
		return;
	}
	if (head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	NODEPTR temp = head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	NODEPTR p = temp->next;
	temp->next = NULL;
	delete p;
}
template<class T>
void DoublyLL<T>::insertBetween(T oldvalue, T newvalue) {
	if (head == NULL) {
		cout << "The list is empty, inserting your node with new value." << endl;
		NODEPTR p = new node;
		p->info = newvalue;
		p->prev = NULL;
		p->next = NULL;
		head = p;
		return;
	}
	if (head->next == NULL && head->info == oldvalue) {
		NODEPTR p = new node;
		p->info = newvalue;
		p->next = NULL;
		p->prev = head;
		head->next = p;
		return;
	}
	NODEPTR temp = head;
	while (temp != NULL && temp->info != oldvalue) {
		temp = temp->next;
	}
	if (temp == NULL) {
		cout << "Value sought is not in the list." << endl;
		return;
	}
	NODEPTR p = new node;
	p->info = newvalue;
	p->next = temp->next;
	p->prev = temp;
	if (temp->next != NULL) {
		temp->next->prev = p;
	}
	temp->next = p;
}
int main() {
	DoublyLL<int> list;

	// Inserting elements at the start
	list.insertStart(10);
	list.insertStart(20);
	list.insertStart(30);

	cout << "Initial List: \n";
	list.display();

	// Deleting first node
	list.deleteStart();
	cout << "\nDisplaying after deleting first node: \n";
	list.display();

	// Inserting at the end
	list.insertEnd(40);
	cout << "\nDisplaying after adding another node at the end: \n";
	list.display();

	// Insert between
	list.insertBetween(10, 25);
	cout << "\nDisplaying after inserting 25 after 10: \n";
	list.display();

	// Insert when value is not found
	list.insertBetween(99, 50);
	cout << "\nDisplaying after trying to insert 50 after 99 (should be at the end): \n";
	list.display();

	// Delete last node
	list.deleteEnd();
	cout << "\nDisplaying after deleting last node: \n";
	list.display();

	return 0;
}