#pragma once
#define dataType int

class Node
{
public:
	dataType data;
	Node* next;
};


class Stack
{
public:
	Node* top;
	Stack();
	void push(dataType item);
	bool isEmpty();
	dataType peek();
	dataType pop();
	void display();
	int count();
	bool isFound(dataType item);
};

