//Create a pointer initialized to nullptr and safely check it before dereferencing
#include<iostream>
using namespace std;
int main(){
    int* p = nullptr;  // Safe initialization

    cout << "Pointer p value: " << p << endl;

    // Safe check before dereferencing
    if (p == nullptr) {
        cout << "p is nullptr, cannot dereference. It's safe." << endl;
    } else {
        cout << "*p = " << *p << endl; // Only dereference if not null
    }

    // Now assign it a valid address
    int x = 50;
    p = &x;

    if (p != nullptr) {
        cout << "\nNow p points to x" << endl;
        cout << "p = " << p << endl;
        cout << "*p = " << *p << endl; // Safe to dereference now
    }

    return 0;
}
//Output:
/*Pointer p value: 0
p is nullptr, cannot dereference. It's safe.

Now p points to x
p = 0xf02c3ffce4
*p = 50*/