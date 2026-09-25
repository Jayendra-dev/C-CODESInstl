//Explain why subtracting pointers from different arrays is invalid
#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {10,20,30,40,50};

    int *p1 = &a[0];
    int *p2 = &a[4];

    // VALID: Same array
    cout << "VALID (same array): p2 - p1 = " << p2 - p1 << endl; // 4 elements apart

    // INVALID: Different arrays
    int *p3 = &b[2];
    // cout << p3 - p1 << endl; // DON'T DO THIS - Invalid, UB, meaningless value

    cout << "\nWhy is at " << p1 << " and p3 is nvalid? p1 iat " << p3 << endl;
    cout << "They are in different memory blocks. Subtraction has no meaning." << endl;

    return 0;
}
//OUTPUT
/*
VALID (same array): p2 - p1 = 4

Why is at 0xc918dffa00 and p3 is nvalid? p1 iat 0xc918dff9e8
They are in different memory blocks. Subtraction has no meaning.*/