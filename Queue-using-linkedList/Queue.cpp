#include <iostream>
#include "Queue.h"
using std::cout;
using std::endl;

Queue::Queue()
{
	front = rear = NULL;
}

//----------------------------------------

bool Queue::isEmpty()
{
	return (front == NULL);
}

//----------------------------------------

void Queue::enqueue(dataType item)
{
	Node* newNode = new Node();
	
	newNode->data = item;
	newNode->next = NULL;

	if (isEmpty())
	{
		front = rear = newNode;
		return;
	}

	rear->next = newNode;
	rear = newNode;

}

//----------------------------------------

void Queue::display()
{
	if (isEmpty())
	{
		cout << "The queue is empty!" << endl;
		return;
	}

	Node* temp = front;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}

//----------------------------------------

int Queue::count()
{
	if (isEmpty())
		return 0;

	int counter = 0;
	Node* temp = front;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return counter;
}

//----------------------------------------

dataType Queue::dequeue()
{
		
	if (isEmpty())
		return -1;
	
	dataType item = front->data;
	Node* delPtr = front;

	if (count() == 1)
		front = rear = NULL;

	else	
		front = front->next;

	delete delPtr;
	return item;

}

//----------------------------------------

dataType Queue::getFront()
{
	return front->data;
}

//----------------------------------------

dataType Queue::getRear()
{
	return rear->data;
}

//----------------------------------------

bool Queue::isFound(dataType item)
{
	bool found = false;
	
	if (isEmpty())
		return found;

	Node* temp = front;
	while (temp != NULL)
	{
		if (temp->data == item)
		{
			found = true;
			break;
		}
		else
		{
			temp = temp->next;
		}

	}

	return found;
}

//----------------------------------------

void Queue::clearQueue()
{
	while (!isEmpty())
	{
		dequeue();
	}
}

//----------------------------------------