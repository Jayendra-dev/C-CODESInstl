#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p = &x;  // p points to x
    *p = 25;      // change value of x through pointer
    cout << *p;   // will print 25
    cout << "\n x = " << x; // x will also be 25
    return 0;
}