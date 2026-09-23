//Given int a[] = {10,20,30,40,50}; int *p = a; determine *p.
#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int *p=a;
    for(int i=0;i<5;i++){
        cout<<*(p+i)<<" ";
         // p stays at 0th position
        }
    return 0; 
}
//output:
//10 20 30 40 50