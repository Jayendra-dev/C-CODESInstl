//Find the minimum element using a pointer.
#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,3,4,5};
    int *p = &n[0];
    int min = *p;

    for(int i=0; i<5; i++){
        if(*p < min){
            min = *p;
        }
        p++; // important!
    }
    cout << "minimum element: " << min;
    return 0;
}
//output:
//