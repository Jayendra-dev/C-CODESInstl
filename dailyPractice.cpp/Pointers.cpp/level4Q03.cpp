//3. Find maximum of two numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *p=&a;
    int *p2=&b;
    if(*p>*p2){
        cout<<"maximum is :"<<*p<<endl;
        
    }else {
        cout<<"maximum is :"<<*p2<<endl;
    }
    return 0;
}
//maximum is :20