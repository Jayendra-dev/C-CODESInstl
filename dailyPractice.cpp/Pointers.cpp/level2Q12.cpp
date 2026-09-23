//Determine *(p+2)
#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50};
    int *p=a;
    cout << *(p+2); // directly prints 30
    return 0; 
}
//output:
//30