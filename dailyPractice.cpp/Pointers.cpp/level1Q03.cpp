//Program: Print the address of a variable using both &x and a pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 50;       // Declare an integer variable

    int *ptr = &x;    // Store the address of x in pointer

    cout << "Address using &x: " << &x << endl;

    cout << "Address using pointer: " << ptr << endl;

    return 0;
}
/*Address using &x: 0xcc84dffd74
Address using pointer: 0xcc84dffd74*/