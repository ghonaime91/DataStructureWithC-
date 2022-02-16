#include <iostream>
#include "BST.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int arr[] = {45,15,79,90,10,55,12,20,50};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    BST bTree1;

    // put the array item into the tree

    for (int i = 0; i < arrSize; i++)
    {
        bTree1.insert(arr[i]);
    }

    // display tree's items with three different methods:

    bTree1.preOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    bTree1.inOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    bTree1.postOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "\n\n--------------------------------------------------------------------" << endl;

    // trying of the search method

    dataType item;

    cout << "Enter an item to search for: ";
    cin >> item;

    if (bTree1.search(item))
        cout << "\nFound\n";

    else
        cout << "\nNot Found\n";

    //  trying of the find min method

    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "\n\n-------------------------- find minimum ----------------------------" << endl;
    Node* min = bTree1.findMin(bTree1.root);
    if (min == NULL)
        cout << "No Items Exists\n";
    else
        cout << "The minimum is " << min->data << endl;

    //  trying of the find max method

    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "\n\n-------------------------- find maximum ----------------------------" << endl;
    Node* max = bTree1.findMax(bTree1.root);
    if (max == NULL)
        cout << "No Items Exists\n";
    else
        cout << "The maximum is " << max->data << endl;

    // applying the delete method

    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "\n\n-------------------------- delete an item ----------------------------" << endl;

    dataType delItem;
    cout << "Enter an item value to delete: ";
    cin >> delItem;
    bTree1.deleteNode(bTree1.root,delItem);

    // display tree's items with three different methods after deletion:

    bTree1.preOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    bTree1.inOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    bTree1.postOrder(bTree1.root);
    cout << "\n\n--------------------------------------------------------------------" << endl;
    

    system("pause>0");

}
