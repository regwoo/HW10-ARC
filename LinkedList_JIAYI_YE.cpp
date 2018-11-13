#include "LinkedList_JIAYI_YE.h"
using namespace std;

LinkedList::LinkedList()
{
	
}

LinkedList::~LinkedList()
{
	//delete all the node created
}


int LinkedList::size() const
{
	return mySize;
}

void LinkedList::addToStart(Node *p)
{
	//add node to start

	
	*p->next = myHead;
	myHead = p;

}

void LinkedList::addToEnd(Node *p)
{
	//and node to end
	*myTail->next = p;
	*p->next = NULL;

}

void LinkedList::printList()
{
	//print all the node
	Node *tempCrr;
	tempCrr = myHead;
	for (; *tempCrr->next != NULL;)
	{
		cout << "item" << endl
			<< *tempCrr->itemName << endl
			<< "No" << endl
			<< *tempCrr->itemNo << endl << endl
			tempCrr = *tempCrr.next;
	}
}

bool LinkedList::removeFromStart()
{
	Node *temp = myHead;
	myHead = *myHead->next;
	delete temp;
}

bool LinkedList::removeFromEnd()
{
	//
	Node *tempCrr=myHead;
	for (; *tempCrr->next->next != NULL;)
	{
		tempCrr = *tempCrr->next;
	}
	myTail = tempCrr;
	tempCrr = *tempCrr->next;
	delegte tempCrr;

}

void LinkedList::removeNodeFromList(int no)
{
	//confirm if this no available
	Node *tempCrr;
	tempCrr = myHead;
	while (; *tempCrr.next! = NULL;)
	{
		if()
	}

	//find and connect two node ,then delete the target node
}

void LinkedList::removeNodeFromList(string itemName)
{

}






