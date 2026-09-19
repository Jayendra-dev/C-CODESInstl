//Explain and demonstrate the difference between p, *p, &p and &x
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    *p=30; // x is now 30

    cout<<"p = "<<p<<"\n";      // address stored in p
    cout<<"*p = "<<*p<<"\n";    // value at that address
    cout<<"&p = "<<&p<<"\n";    // address of pointer p itself
    cout<<"&x = "<<&x<<"\n";    // address of x
    
    return 0;
}