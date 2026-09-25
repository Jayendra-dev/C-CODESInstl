// Determine the final pointer position after p += 3.
#include<iostream>
using namespace std;

int main(){
    int n[10] = {10, 20, 30, 40, 50};
    int *p = &n[0]; // p -> n[0] (value 10)

    cout << "Initial p: " << p << " value: " << *p << endl;

    p += 3; // Jizeof(int) =ump 3 * s 12 bytes -> now points to n[3]

    cout << "Final p after p+=3: " << p << endl;
    cout << "Points to n[3], Address of n[3]: " << &n[3] << endl;
    cout << "Value at *p: " << *p << endl; // 40

    return 0;
}/*
output:
PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level2Q17.exe'
Initial p: 0x5361fff790 value: 10
Final p after p+=3: 0x5361fff79c
Points to n[3], Address of n[3]: 0x5361fff79c
Value at *p: 40*/