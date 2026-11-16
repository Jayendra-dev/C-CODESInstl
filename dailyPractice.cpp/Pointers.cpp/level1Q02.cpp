//Program: Print the Value of a Variable Using a Pointer

#include <iostream>
using namespace std;

int main()
{
    int num = 50;      // Declare an integer variable

    int *ptr = &num;   // Store address of num in pointer

    cout << "Value of variable: " << *ptr << endl;

    return 0;
}
