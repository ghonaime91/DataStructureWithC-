#include <iostream>
#include "Queue.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Queue q1;
    int num, n;
    cout << "How many items will you enter: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter item number " << i + 1 << ": ";
        cin >> n;
        q1.enqueue(n);
    }
    cout << "\n\nThe items are: \n";
    q1.display();
    q1.dequeue();
    cout << "\n\nThe items after one dequeue: \n";
    q1.display();
    cout << "\n\nThe count of the itms is: " << q1.count();
    cout << "\n\nEnter an item to search for: ";
    cin >> n;
    if (q1.isFound(n))
        cout << "Found\n";
    else
        cout << "Not found";
    cout << endl << endl;
    q1.clearQueue();
    cout << "\n\nThe number of items after clear method is " << q1.count()<<endl;


   system("pause>0");
}

