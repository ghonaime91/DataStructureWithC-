#include <iostream>
#include "BST.h"
using std::cout;
using std::cin;
using std::endl;

Node::Node(dataType item)
{
	data = item;
	right = left = NULL;
}

//----------------------------------------

BST::BST()
{
	root = NULL;
}

//----------------------------------------

Node* BST::insert(Node*rPtr,dataType item)
{
	if (rPtr == NULL)
	{
		Node* newNode = new Node(item);
		rPtr = newNode;
	}

	else if (item < rPtr->data)
		rPtr->left = insert(rPtr->left, item);
	
	else
		rPtr->right = insert(rPtr->right, item);

	return rPtr;
}

//----------------------------------------

void BST::insert(dataType item)
{
	root = insert(root,item);
}

//----------------------------------------

void BST::preOrder(Node* rPtr)
{
	if (rPtr == NULL)
		return;

	cout << rPtr->data << "\t";
	preOrder(rPtr->left);
	preOrder(rPtr->right);
}

//----------------------------------------

void BST::inOrder(Node* rPtr)
{
	if (rPtr == NULL)
		return;

	inOrder(rPtr->left);
	cout <<  rPtr->data <<"\t";
	inOrder(rPtr->right);
}

//----------------------------------------

void BST::postOrder(Node* rPtr)
{
	if (rPtr == NULL)
		return;

	postOrder(rPtr->left);
	postOrder(rPtr->right);
	cout << rPtr->data << "\t";
}

//----------------------------------------

Node* BST::search(Node* rPtr, dataType key)
{
	if (rPtr == NULL)
		return NULL;

	else if (key == rPtr->data)
		return rPtr;

	else if (key < rPtr->data)
		return search(rPtr->left, key);

	else
		return search(rPtr->right,key);
		
}

//----------------------------------------

bool BST::search(dataType key)
{
	Node* result = search(root,key);
	if (result == NULL)
		return false;
	else
		return true;
}

//----------------------------------------

Node* BST::findMin(Node* rPtr)
{
	if (rPtr == NULL)
		return NULL;

	else if (rPtr->left == NULL)
		return rPtr;

	else
		return findMin(rPtr->left);
}

//----------------------------------------

Node* BST::findMax(Node*rPtr)
{
	if (rPtr == NULL)
		return NULL;

	else if (rPtr->right == NULL)
		return rPtr;

	else
		return findMax(rPtr->right);
}

//----------------------------------------

Node* BST::deleteNode(Node*rPtr,dataType key)
{
	if (rPtr == NULL)
		return NULL;

	else if (key < rPtr->data)
		rPtr->left = deleteNode(rPtr->left, key);

	else if (key > rPtr->data)
		rPtr->right = deleteNode(rPtr->right,key);

	else
	{
		if (rPtr->left == NULL && rPtr->right == NULL)
			rPtr = NULL;

		else if (rPtr->left != NULL && rPtr->right == NULL)
		{
			rPtr->data = rPtr->left->data;
			delete rPtr->left;
			rPtr->left = NULL;
		}

		else if (rPtr->left == NULL && rPtr->right != NULL)
		{
			rPtr->data = rPtr->right->data;
			delete rPtr->right;
			rPtr->right = NULL;
		}

		else
		{
			Node* max = findMax(rPtr->left);
			rPtr->data = max->data;
			rPtr->left = deleteNode(rPtr->left,max->data);
		}
	
	}
	
	return rPtr;
}