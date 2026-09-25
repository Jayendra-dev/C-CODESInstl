// Find the length of an array using pointers.
#include<iostream>
using namespace std;

int main(){
    int n[] = {12,3,4,5,6,5};

    // p points to first element
    int *p = &n[0];

    // Method 1: Using sizeof to get length, then verifying with pointer traversal
    // total bytes / bytes of one element
    int length = sizeof(n) / sizeof(n[0]);
    cout << "Length using sizeof: " << length << endl;

    // Method 2: Pure pointer traversal to count elements
    int count = 0;

    // We can use start and end pointers to find length
    // &n[0] is start, &n[6] (one past last) is end - but we don't know 6
    // So we traverse using length found, or use sentinel method

    // Counting by moving pointer till we cover array
    for(int *ptr = n; ptr < n + length; ptr++){
        count++; // increment count for each element pointer visits
        // p++ is not needed, ptr itself moves
    }

    cout << "Length using pointer traversal: " << count << endl;

    // Method 3: 
    p = &n[0]; // reset pointer to start
    count = 0;
    for(int i = 0; i < length; i++){
        cout << *p << " "; // print value using pointer
        p++; // move to next address
        count++;
    }
    cout << "\nFinal count: " << count << endl;

    return 0;
}
//output:
/*PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level3Q2.exe'
Length using sizeof: 6
Length using pointer traversal: 6
12 3 4 5 6 5 
Final count: 6
*/