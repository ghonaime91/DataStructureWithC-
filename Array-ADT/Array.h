#pragma once

class Array
{

private:

	int size;
	int length;
	int* arr;

//-------------------------------
public:
	Array(int arrSize);
	~Array();
	void fill();
	void display();
	int getSize();
	int getLength();
	int search(int key);
	void append(int newItem);
	void insert(int index,int newItem);
	void deleteItem(int index);
	void increase(int newSize);
	void merge(Array other);
};

