#pragma once
#define dataType int


class Node
{
public:
	dataType data;
	Node* right;
	Node*left;
	Node(dataType item);
};

class BST
{
public:
	Node* root;
	BST();
	Node* insert(Node*rPtr,dataType item);
	void insert(dataType item);
	void preOrder(Node*rPtr);
	void inOrder(Node* rPtr);
	void postOrder(Node* rPtr);
	Node* search(Node*rPtr,dataType key);
	bool search(dataType key);
	Node* findMin(Node*rPtr);
	Node* findMax(Node* rPtr);
	Node* deleteNode(Node*ePtr,dataType key);
};

