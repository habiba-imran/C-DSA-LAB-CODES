#include<iostream>
using namespace std;
#define NUMNODES 100

class BinaryTree {
	struct TreeNode {
		int info;
		int left, right, parent;
	};
	struct TreeNode BT[NUMNODES];

public:
	BinaryTree() {
		for (int i = 0; i < NUMNODES; i++) {
			BT[i].info = -1;
			BT[i].left = -1;
			BT[i].right = -1;
			BT[i].parent = -1;
		}
	}
	void setRoot(int value) {
		BT[1].info = value;
	}
	void insertLeft(int parentIndex, int value) {
		int leftIndex = 2 * parentIndex;
		if (leftIndex >= NUMNODES) {
			cout << "Error: Left index out of bounds.\n";
			return;
		}
		if (BT[leftIndex].info != -1) {
			cout << "Left child already exists." << endl;
			return;
		}
		BT[leftIndex].info = value;
		BT[leftIndex].parent = parentIndex;
		BT[parentIndex].left = leftIndex;
	}
	void insertRight(int parentIndex, int value) {
		int rightIndex = 2 * parentIndex + 1;
		if (rightIndex >= NUMNODES) {
			cout << "Error: Right index out of bounds.\n";
			return;
		}
		if (BT[rightIndex].info != -1) {
			cout << "Error: Right child already exists at index " << rightIndex << ".\n";
			return;
		}
		BT[rightIndex].info = value;
		BT[rightIndex].parent = parentIndex;
		BT[parentIndex].right = rightIndex;
	}
	void inorder(int index) {
		if (index >= NUMNODES || BT[index].info == -1) return;
		inorder(BT[index].left);
		cout << BT[index].info << " ";
		inorder(BT[index].right);
	}
	void preorder(int index) {
		if (index >= NUMNODES || BT[index].info == -1) return;
		cout << BT[index].info << " ";
		preorder(BT[index].left);
		preorder(BT[index].right);
	}
	void postorder(int index) {
		if (index >= NUMNODES || BT[index].info == -1) return;
		postorder(BT[index].left);
		postorder(BT[index].right);
		cout << BT[index].info << " ";
	}
};

int main() {
	BinaryTree tree;
	tree.setRoot(10);
	tree.insertLeft(1, 20);
	tree.insertRight(1, 30);
	tree.insertLeft(2, 40);
	tree.insertRight(2, 50);
	tree.insertLeft(3, 60);
	tree.insertRight(3, 70);

	cout << "Inorder: ";
	tree.inorder(1); //1st index: root
	cout << endl;

	cout << "Preorder: ";
	tree.preorder(1);
	cout << endl;

	cout << "Postorder: ";
	tree.postorder(1);
	cout << endl;
}