//Program: Change a variable's value through its pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 10;       // Declare an integer variable

    int *ptr = &x;    // Store address of x in pointer

    cout << "Before changing: " << x << endl;

    *ptr = 50;        // Change x's value through pointer

    cout << "After changing: " << x << endl;

    return 0;
}
/*Before changing: 10
After changing: 50*/