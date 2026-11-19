//Question 10: Modify a variable to 100 through its pointer without directly writing x = 100.

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *p = &x;  // Pointer stores address of x

    *p = 100;     // Modify x through pointer

    cout << "Value of x: " << x << endl;
    cout << "Value through pointer: " << *p << endl;

    return 0;
}
/*Value of x: 100
Value through pointer: 100*/