//11. Compare Two Arrays Using Pointers in C++
#include <iostream>
using namespace std;

int main()
{
    int arr1[5], arr2[5];

    // Input first array
    cout << "Enter 5 elements of first array:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "arr1[" << i << "] = ";
        cin >> arr1[i];
    }

    // Input second array
    cout << "\nEnter 5 elements of second array:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "arr2[" << i << "] = ";
        cin >> arr2[i];
    }

    // Declare pointers
    int *p1 = arr1;
    int *p2 = arr2;

    bool equal = true;

    // Compare using pointers
    for(int i = 0; i < 5; i++)
    {
        if(*(p1 + i) != *(p2 + i))
        {
            equal = false;
            break;
        }
    }

    // Display result
    if(equal)
        cout << "\nArrays are equal.\n";
    else
        cout << "\nArrays are not equal.\n";

    return 0;
}
/*Enter 5 elements of first array:
arr1[0] = 1   
arr1[1] = 2
arr1[2] = 3
arr1[3] = 4
arr1[4] = 5

Enter 5 elements of second array:
arr2[0] = 1
arr2[1] = 2
arr2[2] = 3
arr2[3] = 4
arr2[4] = 5

Arrays are equal.*/