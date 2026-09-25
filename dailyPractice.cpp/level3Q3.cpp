// Find the sum and average of an array using pointer
#include<iostream>
using namespace std;

int main(){
    int n[] = {12,23,34,45,67};
    int *p = &n[0]; // p points to first element n[0]
    int sum = 0;

    // Find length of array
    int length = sizeof(n) / sizeof(n[0]);

    // Traverse using pointer
    for(int i = 0; i < length; i++){
        sum += *p; // Add value pointed by p, NOT i
        p++; // Move pointer to next element
    }

    // Average should be calculated ONCE after loop, not inside loop
    float avg = (float)sum / length;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}//output
//PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level3Q3.exe'
//Sum = 181
//Average = 36.2