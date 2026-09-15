#include <iostream>
using namespace std;

int main() {
    int a = 10;      // integer variable
    int *ptr;        // integer pointer

    ptr = &a;        // store address of a in pointer

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value of ptr (address it holds) = " << ptr << endl;
    cout << "Value pointed by ptr = " << *ptr << endl;

    return 0;
}