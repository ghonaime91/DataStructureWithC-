#include <iostream>
#include "LinkedList.h"
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n,input;
    LinkedList list;

    cout << "Hello enter the list length: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter item No " << i + 1 << "): ";
        cin >> input;
        list.append(input);
    }
    cout << endl << endl;
    cout << "Your list length is " << list.count() << endl
         << "Your list's items are: "; list.display();
    cout << "\n\nEnter an item to delete: ";
    int delItem;
    cin >> delItem;
    list.deleteNode(delItem);
    cout << "\nNow the list's items became \n"; list.display();
    cout << "\n\nEnter an item to insert before specific item: ";
    int item;
    cin >> item;
    cout << "Now enter the next item;";
    int nextItem;
    cin >> nextItem;
    list.insertBefore(nextItem,item);
    cout << "\nNow the list's items became \n"; list.display();


    system("pause>0");
}

