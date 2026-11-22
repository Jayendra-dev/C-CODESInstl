//Find Duplicate Elements Using Pointer-Based Traversal in C++
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 20, 40, 10, 50};

    int *p = arr;

    cout << "Duplicate elements are: ";

    for(int i = 0; i < 7; i++)
    {
        for(int j = i + 1; j < 7; j++)
        {
            if(*(p + i) == *(p + j))
            {
                cout << *(p + i) << " ";
                break;
            }
        }
    }

    return 0;
}
//Duplicate elements are: 10 20 