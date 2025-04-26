#include<iostream>
using namespace std;
class BinaryTree {
public:
	struct Treenode {
		int info;
		struct Treenode* left;
		struct Treenode* right;
		struct Treenode* parent;
	};
	typedef Treenode* NODEPTR;
	NODEPTR root; 


	BinaryTree() {
		root = nullptr;
	}
	NODEPTR getRoot() {
		return root;
	}
	bool isEmpty() const {
		return root == nullptr;
	}
	NODEPTR makeTree(int x) {
		NODEPTR temp = new Treenode;
		temp->info = x;
		temp->right = nullptr;
		temp->left = nullptr;
		temp->parent = nullptr;
		return temp;
		// returns pointer to that new node created
	}
	bool isLeft(NODEPTR p) { //checks whether the node pointed by p is left child or not{
		if (isEmpty() || p == nullptr) return false;
		return (p->parent->left == p);
	}
	bool isRight(NODEPTR p) { //checks whether the node pointed by p is right child or not
		if (isEmpty() || p == nullptr) return false;
		return (p->parent->right == p);
	}
	void setRoot(int x) {
		if (!isEmpty()) {
			cout << "Root already exists. " << endl;
			return;
		}
		else {
			root = makeTree(x);
		}
	}
	void setLeft(NODEPTR p, int x) {
		if (p == nullptr) {
			cout << "Cannot insert left child. Parent does not exist." << endl;
			return;
		}
		if (p->left != nullptr) {
			cout << "Left child already exists." << endl;
			return;
		}
		NODEPTR child = makeTree(x);
		child->parent = p;
		p->left = child;
	}

	void setRight(NODEPTR p, int x) {
		if (p == nullptr) {
			cout << "Cannot insert right child. Parent does not exist." << endl;
			return;
		}
		if (p->right != nullptr) {
			cout << "Right child already exists." << endl;
			return;
		}
		NODEPTR child = makeTree(x);
		child->parent = p;
		p->right = child;
	}

	void pretrav(NODEPTR p) { // root, left, right
		if (p != nullptr) {
			cout << p->info << " ";
			pretrav(p->left);
			pretrav(p->right);
		}
	}
	void posttrav(NODEPTR p) { // left, right, root
		if (p != nullptr) {
			posttrav(p->left);
			posttrav(p->right);
			cout << p->info << " ";
		}
	}
	void intrav(NODEPTR p) { // left, root, right
		if (p != nullptr) {
			intrav(p->left);
			cout << p->info << " ";
			intrav(p->right);
		}
	}
};
int main() {
	BinaryTree bt;
	bt.setRoot(10);
	BinaryTree::NODEPTR root = bt.getRoot();
	bt.setLeft(root, 5);
	bt.setRight(root, 15);
	bt.setLeft(root->left, 2);
	bt.setRight(root->left, 7);

	cout << "Preorder: ";
	bt.pretrav(root);
	cout << "\nInorder: ";
	bt.intrav(root);
	cout << "\nPostorder: ";
	bt.posttrav(root);
}