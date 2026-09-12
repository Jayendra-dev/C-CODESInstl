#include <iostream>
using namespace std;
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a=" << a << " b=" << b << endl;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    
    cout << "Original: x=" << x << " y=" << y << endl << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x=" << x << " y=" << y << " NOT SWAPPED!" << endl << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x=" << x << " y=" << y << "SWAPPED!" << endl << endl;
    x = 10; y = 20;
    swapByPointer(&x, &y);
    cout << "After swapByPointer: x=" << x << " y=" << y << " SWAPPED!" << endl;

    return 0;
}
//Why Call by Value FAILS? 
//When you call swapByValue(x, y), C++ makes COPY of x and y into a and b.
//a and b are stored at a different memory address in the function stack.
//You swap a and b inside the function, but x and y in main() are untouched.
//When function ends, a and b are destroyed. Original values remain same.
//This is called Pass by Value.