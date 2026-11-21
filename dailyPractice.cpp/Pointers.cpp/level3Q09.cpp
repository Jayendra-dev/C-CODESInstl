//Write a C++ program to reverse an array using pointers.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int n = 5;

    int *start = arr;
    int *end = arr + n - 1;

    while (start < end)
    {
        // Swap values
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//Reversed array: 50 40 30 20 10 