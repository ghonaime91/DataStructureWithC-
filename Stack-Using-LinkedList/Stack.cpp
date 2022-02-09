#include <iostream>
#include "Stack.h"
using std::cout;
using std::endl;

Stack::Stack()
{
	top = NULL;
}

//------------------------------------------------

void Stack::push(dataType item)
{
	Node* newNode = new Node();
	newNode->data = item;
	newNode->next = NULL;

	if (isEmpty())
		top = newNode;
	else
	{
		newNode->next = top;
		top = newNode;
	}
}

//------------------------------------------------

bool Stack::isEmpty()
{	
	return (top == NULL);
}


//------------------------------------------------

dataType Stack::peek()
{
	return top->data;
}

//------------------------------------------------

dataType Stack::pop()
{
	if (isEmpty())
		return 0;

	dataType val;
	val = top->data;
	Node* delPtr = top;
	top = top->next;
	delete delPtr;

	return val;
}

//------------------------------------------------

void Stack::display()
{
	Node* temp = top;
	while (temp != NULL)
	{
		cout << temp->data << "\n";
		temp = temp->next;
	}
}

//------------------------------------------------

int Stack::count()
{
	if (isEmpty())
		return 0;

	int counter = 0;
	Node* temp = top;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}

	return counter;
}

//-----------------------------------------------

bool Stack::isFound(dataType item)
{
	bool found = false;

	if (isEmpty())
		found = false;

	else {

		Node* temp = top;
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

	}
	return found;
}

//------------------------------------------------