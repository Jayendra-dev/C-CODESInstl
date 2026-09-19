//Given int x = 10; int *p = &x; predict the values of x, *p, p and &x
#include<iostream>
using namespace std;
int main(){
    int x=10;
    int*p=&x;
    cout<<x<<'\n'<<*p<<'\n'<<p<<"\n"<<&x;
    return 0;
}