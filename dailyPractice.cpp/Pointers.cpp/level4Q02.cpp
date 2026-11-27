// swap two variables using pointers.
#include <iostream>
using namespace std;

int main()
{
    int x1 = 1;
    int x2 = 2;

    int *p1 = &x1;
    int *p2 = &x2;

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
/*After swapping:
x1 = 2
x2 = 1*/