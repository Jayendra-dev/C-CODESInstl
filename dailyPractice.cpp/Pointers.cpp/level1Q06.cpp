//6. Difference between p, *p, &p and &x 
#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Pointer stores address of x
    int *p = &x;

    cout << "Value of x: " << x << endl;

    cout << "p (Address of x): " << p << endl;

    cout << "*p (Value of x): " << *p << endl;

    cout << "&p (Address of pointer): " << &p << endl;

    cout << "&x (Address of x): " << &x << endl;

    return 0;
}
/*
output:
Value of x: 10
p (Address of x): 0x93cf3ffc7c
*p (Value of x): 10
&p (Address of pointer): 0x93cf3ffc70
&x (Address of x): 0x93cf3ffc7c
PS D:\cpp\CPP\POINTERS\output> 
*/