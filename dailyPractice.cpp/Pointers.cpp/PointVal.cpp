//print the value of a variable using pointer
#include <iostream>
using namespace std;

int main() {
    int x = 50;
    int *p = &x;
    
    cout << *p;  // printing value using pointer

    return 0;
}