//

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    cout << "&x = " << &x << endl;

    return 0;
}

/*PS D:\cpp\CPP\POINTERS\output> & .\'level1Q10.exe'
x = 10
*p = 10
p = 0xe123ff6d4
&x = 0xe123ff6d4*/