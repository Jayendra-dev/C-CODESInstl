// C++ Program: Create pointers for int, float, char and double variables and observe their sizes

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.456;

    // Declare pointers for different data types
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    double *p4 = &d;

    // Print sizes of variables
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " byte" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;

    cout << "\nSize of int pointer: " << sizeof(p1) << " bytes" << endl;
    cout << "Size of float pointer: " << sizeof(p2) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(p3) << " bytes" << endl;
    cout << "Size of double pointer: " << sizeof(p4) << " bytes" << endl;

    return 0;
}
/*size of int: 4 bytes
Size of float: 4 bytes
Size of char: 1 byte
Size of double: 8 bytes

Size of int pointer: 8 bytes
Size of float pointer: 8 bytes
Size of char pointer: 8 bytes
Size of double pointer: 8 bytes*/