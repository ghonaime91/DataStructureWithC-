#include <iostream>
#include "Stack.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Stack s1;
    int num,n;
    cout << "How many items will you enter: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter item number " << i + 1 << ": ";
        cin >> n;
        s1.push(n);
    }
    cout << "\n\nThe items are: \n";
    s1.display();
    s1.pop();
    cout << "\n\nThe items after one pop: \n";
    s1.display();
    cout << "\n\nThe count of the itms is: " << s1.count();
    cout << "Enter an item to search for: ";
    cin >> n;
    if (s1.isFound(n))
        cout << "Found\n";
    else
        cout << "Not found";

    system("pause>0");
}