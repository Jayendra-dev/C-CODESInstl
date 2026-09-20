// Create an integer array and use a pointer to print all elements
#include<iostream>
using namespace std;
int main(){
    int n[5]={10,20,30,40,50};
    int *p = n; // p points to first element, p = &n[0]
    
    // Loop using pointer
    for(int i = 0; i < 5; i++){
        cout << *(p + i) << " "; // or cout << p[i]
    }

    return 0;
}