// Program to print array using *(p+i) method
#include<iostream>
using namespace std;

int main(){
    int n[5]={1,2,3,4,5}; // Step 1: Create an integer array with 5 elements

    // Step 2: Create a pointer 'p' and point it to first element of array
    // WRONG was: int *p = n[0]; // n[0] is value 1, not address
    // CORRECT is: n or &n[0] (both give address of first element)
    int *p = n; // or int *p = &n[0];

    // Step 3: Loop through all 5 elements
    for(int i=0; i<5; i++){
        // p+i = address of i-th element
        // *(p+i) = value stored at that address
        cout << *(p+i) << " ";
    }

    return 0; // Program ends successfully
}