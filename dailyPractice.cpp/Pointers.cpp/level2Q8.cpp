//Find the maximum element using a pointer.
#include<iostream>
using namespace std;
int main(){
    int n[5]={1,2,3,4,5};
    int *p = &n[0];
    int max = *p; // max should start from first element, not 0

    for(int i=0; i<5; i++){
        if(*p > max){
            max = *p;
        }
        p++; // move pointer to next element
    }
    cout << "Maximum element is: " << max << endl;
    return 0;
}
//output:
//Maximum element is: 5