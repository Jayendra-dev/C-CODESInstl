// Print an array using a pointer without array indexing.
#include<iostream>
using namespace std;

int main(){
    int n[5] = {1,2,3,4,5};

    // p points to last element of array
    int *p = &n[4];

    // Loop from last index to first
    // Mistake in your code: i<=0 should be i>=0
    // and return 0 was inside loop - moved outside
    for(int i = 4; i >= 0; i--){

        // *p gives value at pointer location
        // p-- moves pointer to previous element
        cout << *p << " ";
        p--;
    }

    return 0;
}//output:5 4 3 2 1 