// Predict the output of: int a[]={5,10,15,20}; int *p=a; cout<<*p<<' '; p+=2; cout<<*p;
#include<iostream>
using namespace std;
int main(){
    int a[]={5,10,15,20};
    int *p=a; // p -> a[0]

    cout<< *p <<'\n'; // 5
    p+=2; // now -> a[2]
    cout<< *p; // 15

    return 0;
}