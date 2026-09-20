//Print an array using p[i].
#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,3,4,5};
    int*p=&n[0];
    for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}