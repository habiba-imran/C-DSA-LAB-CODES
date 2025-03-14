#include "LinkedList.h"
#include "LinkedStr.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	int choice;
	cout << "1. Exercise 6.1: Test all functions of linkedList.h\n";
	cout << "2. Exercise 6.2: Reversing string using stack \n";
	cout << "3. Exercise 6.3: Using user input of struct node\n";
	cin >> choice;
	if (choice == 1) {
		cout << "----------------------------\n";
		cout << "EXERCISE 6.1:  \n";
		cout << "----------------------------\n";
		List<int> myList;
		myList.push(10);
		myList.push(20);
		myList.push(30);
		cout << "List elements are: 30->20->10" << endl;
		cout << "Inserting 25 after 20:" << endl;
		myList.insertAfter(20, 25);
		cout << "List is now : 30 -> 20 -> 25 -> 10" << endl;
		cout << "Deleting 20:" << endl;
		myList.deleteItem(20);
		cout << "List is now : 30 -> 25 -> 10" << endl;
		cout << "Final List after operations:" << endl;
		while (!myList.emptyList()) {
			cout << myList.pop() << " ";
		}
	}
	else if (choice == 2) {
		cout << "----------------------------\n";
		cout << "EXERCISE 6.2:  \n";
		cout << "----------------------------\n";
		List<char> link1;
		string str;
		cout << "Enter a string to reverse it: ";
		getline(cin, str);
		cout << "Pushed characters: ";
		for (char ch : str) {
			link1.push(ch);
			cout << ch;
		}
		cout << "\nPopped and reversed characters: ";
		for (char ch : str) {
			cout << link1.pop();
		}
	}
	else if (choice == 3) {
		cout << "----------------------------\n";
		cout << "EXERCISE 6.3:  \n";
		cout << "----------------------------\n";
		LinkedStr<int> link;
		int num_nodes;
		cout << "Enter number of nodes: ";
		cin >> num_nodes;
		cout << "=============================\n";
		link.makeStr(num_nodes);
		cout << "=============================\n";
		link.displayStr();
		cout << "=============================\n";
		int k;
		cout << "Enter the value of node you want to delete: ";
		cin >> k;
		link.remove(k);
		cout << "Displaying after removing node of info " << k << endl;
		link.displayStr();
		cout << "=============================\n";
		cout << "Displaying after deleting first node:\n ";
		link.removeFirst();
		link.displayStr();
		cout << "=============================\n";
		cout << "Displaying after deleting last node:\n ";
		link.removeLast();
		link.displayStr();
		cout << "=============================\n";
	}
	else {
		cout << "Invalid choice entered.";
		return 0;
	}


	return 0;

}