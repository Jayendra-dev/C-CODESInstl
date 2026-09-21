//> Move a pointer backward using p--
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    // Start pointer at last element
    int *p = &arr[4];

    cout << "Moving pointer backward using p-- :\n";
    for(int i = 4; i >= 0; i--){
        cout << "p points to arr[" << i << "] = " << *p << " \t Address: " << p << endl;
        p--; // Move backward
    }
    return 0;
}
//output:
/*
Moving pointer backward using p-- :
p points to arr[4] = 50          Address: 0x5ca25ffdf0
p points to arr[3] = 40          Address: 0x5ca25ffdec
p points to arr[2] = 30          Address: 0x5ca25ffde8
p points to arr[1] = 20          Address: 0x5ca25ffde4
p points to arr[0] = 10          Address: 0x5ca25ffde0*/