#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    int size;
    start:
    cout << "Hello enter the size of your array: "<<endl;
    cin >> size;
    if (size < 1)
    {
        cout << "Size must be greatr than zero !!\n";
        goto start;
    }
    Array myArr(size);
    int n;
    do
    {
        cout << "Hi, choose the operation number or -1 to exit: " << endl<<
                "1) to fill the array\n"<<
                "2) to display the array items\n"<<
                "3) to get the array's size\n"<<
                "4) to get the array length\n"<<
                "5) to search for an item\n"<<
                "6) to append a new item to the array\n"
                "7) to insert an item into specific position\n"
                "8) to delete an item\n"
                "9) to increase the size of the array\n\n";

        cin >> n;
        switch (n)
        {
        case 1:
            myArr.fill();
            cout << endl << endl;
            break;
        case 2:
            myArr.display();
            cout << endl << endl;
            break;
        case 3:
            cout << "The array size is " << myArr.getSize() << endl;
            cout << endl << endl;
            break;
        case 4:
            cout << "The array length is " << myArr.getLength() << endl;
            cout << endl << endl;
            break;
        case 5:
            int item;
            cout << "\n enter an item to search for: \n";
            cin >> item;
            cout<<"\nThe index of the item is "<<myArr.search(item)<<endl<<endl;
            break;
        case 6:
            int newItem;
            cout << "\n enter the new item: \n";
            cin >> newItem;
            myArr.append(newItem);
            break;
        case 7:
            int newItem2, index;
            cout << "Enter The position that you want to insert thenew item\n";
            cin >> index;
            cout << "Enter The new item\n";
            cin >> newItem2;
            myArr.insert(index, newItem2);
            break;
        case 8:
            int indexToDelete;
            cout << "Enter the index of item you want to delete: \n";
            cin >> indexToDelete;
            myArr.deleteItem(indexToDelete);
            break;
        case 9:
            int newSize;
            cout << "Enter the total size(old + new): \n";
            cin >> newSize;
            myArr.increase(newSize);
            break;

        }
    } while (n != -1);
    

    //------- merging 

    Array arr1(5),arr2(5);
    arr1.fill();
    arr2.fill();
    arr1.merge(arr2);
    cout << "\n\nArr1 after merge\n\n";
    arr1.display();

    system("pause>0");
}

