
//Question 20. Difference between cout << p and cout << *p when p is a character pointer.
#include <iostream>
using namespace std;

int main()
{
    char str[] = "HELLO";
    char *p = str;

    cout << p << endl;
    cout << *p << endl;

    return 0;
}

//HELLO
//H