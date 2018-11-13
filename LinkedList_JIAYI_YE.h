#pragma once
#include "node_JIAYI_YE.h"
#include <string>
using namespace std;
class LinkedList {
public:
	LinkedList();
	~LinkedList();
	int size() const;
	void addToStart(Node *);
	void addToEnd(Node *);
	void printList();
	bool removeFromStart();
	bool removeFromEnd();
	void removeNodeFromList(int);
	void removeNodeFromList(string);
private:
	Node *myHead;
	Node *myTail;
	int mySize;
};
