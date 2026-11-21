//10.Copy one array into another using pointers.

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5];

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for (int i = 0; i < 5; i++)
    {
        *ptr2 = *ptr1;

        ptr1++;
        ptr2++;
    }

    cout << "Copied array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
//copied array: 10 20 30 40 50 