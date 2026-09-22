//Reverse an array using two pointers.
#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,3,4,5};
    int *p1 = &n[0]; // start pointer
    int *p2 = &n[4]; // end pointer (last element)

    while(p1 < p2){
        // swap values
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++; // move forward
        p2--; // move backward
    }

    // print reversed array
    cout << "Reversed array: ";
    for(int i=0; i<5; i++){
        cout << n[i] << " ";
    }
    return 0;
}
//output:
//Reversed array: 5 4 3 2 1 