// 6. Search for an element using a pointer
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int *ptr = arr;
    bool found = false;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++)
    {
        if(*(ptr + i) == key)
        {
            cout << "Element found at position " << i + 1;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Element not found";
    }

    return 0;
}
/*Enter element to search: 40
Element found at position 4*/