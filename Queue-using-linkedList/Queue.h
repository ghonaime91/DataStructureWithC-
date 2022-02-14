#pragma once
#define dataType int

class Node
{
public:
	dataType data;
	Node* next;
};


class Queue
{
public:
	Node* front;
	Node* rear;
	Queue();
	bool isEmpty();
	void enqueue(dataType item);
	void display();
	int count();
	dataType dequeue();
	dataType getFront();
	dataType getRear();
	bool isFound(dataType item);
	void clearQueue();
};

