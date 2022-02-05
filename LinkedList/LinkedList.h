#pragma once
#define dataType int

class Node
{
public:
	dataType data;
	Node* next;
};

class LinkedList
{
public:
	Node* head;
	LinkedList();
	bool isEmpty();
	void insertFirst(dataType d);
	void display();
	int count();
	bool isFound(dataType item);
	void insertBefore(dataType item, dataType value);
	void append(dataType value);
	void deleteNode(dataType value);
};

