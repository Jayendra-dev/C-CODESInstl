//c++ Program: Integer Variable and Integer Pointer

#include <iostream>
using namespace std;

int main()
{
    int num = 10;       // Declare an integer variable

    int *ptr;           // Declare an integer pointer

    ptr = &num;         // Store address of num in pointer

    cout << "Value of num: " << num << endl;

    cout << "Address of num: " << &num << endl;

    cout << "Value stored in ptr: " << ptr << endl;

    cout << "Value pointed by ptr: " << *ptr << endl;

    return 0;
}
/*output:
PS D:\cpp\CPP\POINTERS\output> & .\'level1Q01.exe'
Value of num: 10
Address of num: 0xaa155ffc74
Value stored in ptr: 0xaa155ffc74
Value pointed by ptr: 10*/
