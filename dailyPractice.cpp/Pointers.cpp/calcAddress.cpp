//Print the address of a variable using both &x and a pointer.
#include<iostream>
using namespace std;
int main(){
int x=10;
int*p=&x;
cout<<&x<<"\n";
cout<<p;
}