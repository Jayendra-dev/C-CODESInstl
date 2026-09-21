#include<iostream>
using namespace std;
int main(){
    int n[5] = {10, 20, 30, 40, 50};
    int *p = &n[0]; // p points to first element
    int sum = 0;

    for(int i = 0; i < 5; i++){
        sum += *p; // add VALUE at pointer
        p++; // move pointer to next element
    }

    cout << "Sum = " << sum;

    return 0;
}
//output:
//Sum = 150