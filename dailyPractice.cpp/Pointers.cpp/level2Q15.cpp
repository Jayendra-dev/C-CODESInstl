//Determine &a[2] - &a[0].
#include<iostream>
using namespace std;

int main(){
    // Memory Layout (assume base address 1000, int = 4 bytes):
    // Index: 0 1 2 3 4
    // Value: [10] [20] [30] [40] [50]
    // Address: 1000 1004 1008 1012 1016
    int a[5] = {10,20,30,40,50};

    int *p = &a[0]; // p = 1000

    // --- THE CONCEPT ---
    // &a[2] -> Address of 3rd element -> 1008
    // &a[0] -> Address of 1st element -> 1000

    // When you do: &a[2] - &a[0]
    // Step 1: Byte difference = 1008 - 1000 = 8 bytes
    // Step 2: Divide by sizeof(int) = 8 / 4 = 2 elements
    // Result type is ptrdiff_t, but prints as 2

    cout << &a[2] - &a[0]; // Output: 2

    // --- FOR REVISION - Important Variations ---

    // cout << &a[4] - &a[0]; // Output: 4 (not 16)

    // cout << &a[0] - &a[2]; // Output: -2 (negative if reverse)

    // cout << (long)&a[2] - (long)&a[0]; // If you cast to int/long, you WILL get 8 (byte diff)


    // cout << p+2; // Address: 1008
    // cout << * (p+2); // Value: 30

    return 0;
}