#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;


LinkedList::LinkedList()
{
	head = NULL;
}

//--------------------------------------

bool LinkedList::isEmpty()
{
	return (head == NULL);
}

//--------------------------------------

void LinkedList::insertFirst(dataType d)
{
	Node* newNode;
	newNode = new Node();
	newNode->data = d;

	if (isEmpty())
	{		
		newNode->next = NULL;
		head = newNode;
	}

	else
	{		
		newNode->next = head;
		head = newNode;
	}
}

//--------------------------------------

void LinkedList::display()
{
	if (isEmpty())
	{
		cout << "The List is empty"<<endl;
		return;
	}

	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	
}

//--------------------------------------

int LinkedList::count()
{
	if (isEmpty())
		return 0;

	int counter = 0;

	Node* temp = head;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

//--------------------------------------

bool LinkedList::isFound(dataType item)
{
	bool found = false;

	Node* temp = head;
	while (temp != NULL)
	{

		if (temp->data == item)
			found = true;

		temp = temp->next;
	}

	return found;
}

//--------------------------------------

void LinkedList::insertBefore(dataType item, dataType value)
{
	if (isEmpty())
		insertFirst(value);

	else if (isFound(item))
	{
		Node* newNode = new Node();
		newNode->data = value;

		Node* temp = head;

		while (temp != NULL && temp->next->data != item)
			temp = temp->next;

		newNode->next = temp->next;
		temp->next = newNode;
	}
	else
	{
		cout << "Item not found\n";
	}
}

//--------------------------------------

void LinkedList::append(dataType value)
{
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = NULL;

	if (isEmpty())
	{
		head = newNode;
		return;
	}
	
	Node* temp = head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	
}

//--------------------------------------

void LinkedList::deleteNode(dataType value)
{
	
	if (!(isFound(value)))
	{
		cout << "Item not found\n";
		return;
	}

	Node* delPtr = head;
	if (head->data == value)
	{
		head = head->next;
		delete delPtr;
		return;
	}

	Node* prev = NULL;

	while (delPtr->data != value)
	{
		prev = delPtr;
		delPtr = delPtr->next;
	}

	prev->next = delPtr->next;
	delete delPtr;  
	
}

//--------------------------------------

