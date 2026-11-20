//8. Find the Last Occurrence of an Element in C++
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 20, 40, 20, 50};
    int key, pos = -1;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
        }
    }

    if(pos != -1)
        cout << "Last occurrence found at position " << pos + 1;
    else
        cout << "Element not found";

    return 0;
}

// Enter element to search: 10
// Last occurrence found at position 1
