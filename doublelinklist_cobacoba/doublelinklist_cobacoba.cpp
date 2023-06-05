#include <iostream>
#include <string>
using namespace std;

class Node {
protected:
	int noID;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();

};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}



void DoubleLinkedList::addNode() {
	int capacity;
	string nm;
	cout << "\n Masukkan jumlah murid : ";
	cin >> capacity;
	cout << "\n Masukkan nama murid : ";
	cin >> nm;
	Node* newNode = new Node();
	newNode->noID = capacity;
	newNode->name = nm;
}