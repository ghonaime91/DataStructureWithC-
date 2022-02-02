#include <iostream>
#include "Array.h"

using std:: cout;
using std:: cin;
using std:: endl;

Array::Array(int arrSize)
{
	size = arrSize;
	length = 0;
	arr = new int[size];
}

//----------------------------------------------

Array::~Array()
{
	delete[]arr;
	cout << "memory cleand!";
}

//----------------------------------------------

void Array::fill()
{
	if (size == length)
	{
		cout << "The array is full\n";
		return;
	}
	int itemsNum;
	start:
	cout << "How many items will you enter? " << endl;
	cin >> itemsNum;

	if (itemsNum <= 0)
	{
		cout << "The items number can't be less than one!" << endl;
		goto start;
	}

	else if (itemsNum > size)
	{
		cout << "the maximum size is: " << size<<endl;
		goto start;
	}
	else
	{
		for (int i = 0; i < itemsNum; i++)
		{
			cout << "Enter item NO " << i + 1 << ": " << endl;
			cin >> arr[i];
			length++;
		}
		cout << "items added successfully" << endl;
		return;
	}

}

//----------------------------------------------

void Array::display()
{
	if (length < 1)
	{
		cout << "The array is empty!" << endl;
		return;
	}
	cout << "The array items:" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "array[" << i << "]" << " is " << arr[i] << endl;
	}
}

//----------------------------------------------

int Array::getSize()
{
	if (size < 1)
		return 0;
	return size;
	
}

//----------------------------------------------

int Array::getLength()
{
	if (length < 1)
		return 0;
	return length;
}

//----------------------------------------------

int Array::search(int key)
{
	int index = -1;
	if (length < 1)
		return index;

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == key)
		{
			index = i;
			break;
		}
	}
	return index;
}

//----------------------------------------------

void Array::append(int newItem)
{
	if (length < 1)
	{
		arr[0] = newItem;
		length++;
	}
	else if(length < size)
	{
		arr[length] = newItem;
		length++;
	}
	else
	{
		cout << "No place for new item!" << endl;
	}
}

//----------------------------------------------

void Array::insert(int index, int newItem)
{
	if (index >= 0 && index < size)
	{
		for (int i = length; i > index; i--)
		{
			arr[i] = arr[i - 1];
		}

		arr[index] = newItem;
		length++;
	}
	else
		cout << "Error out of range!" << endl;
}

//----------------------------------------------

void Array::deleteItem(int index)
{
	if (index >= 0 && index < size)
	{
		for (int i = index; i < length - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		length--;
    }
	else
		cout << "Error out of range!" << endl;
}

//----------------------------------------------

void Array::increase(int newSize)
{
	if (newSize <= size)
	{
		cout << "The new size must be greater than the old size\n";
		return;
	}

	size = newSize;
	int* old = arr;
	arr = new int[newSize];

	for (int i = 0; i < length; i++)
		arr[i] = old[i];

	delete[]old;
	
}

//--------------------------------------------

void Array::merge(Array other)
{
	int newSize = size + other.getSize();
	size = newSize;
	int* old = arr;
	arr = new int[newSize];

	int i;
	for ( i = 0; i < length; i++)
	{
		arr[i] = old[i];
	}

	delete[]old;
	int j = i;

	for (int i = 0; i < other.getLength(); i++)
	{
		arr[j++] = other.arr[i];
		length++;
	}





}

//----------------------------------------------