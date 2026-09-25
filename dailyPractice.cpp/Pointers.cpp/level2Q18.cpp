//Determine the final pointer position after p++; p++; p--;.
#include<iostream>
using namespace std;

int main(){
    int n[10] = {10, 20, 30, 40, 50};
    int *p = &n[0]; // Start at n[0] -> 10

    p++; // -> n[1] -> 20
    p++; // -> n[2] -> 30
    p--; // -> n[1] -> 20 (one step back)

    cout << "Final p: " << p <<"\n"<< endl;
    cout << "Address of n[1]: " << &n[1]<<"\n" <<*n<<"\n"<< endl;
    cout << "Final *p: " << *p << endl; // 20

    return 0;
}
//OUtput:
/*
PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level2Q18.exe'
Final p: 0x4f273ff8f4

Address of n[1]: 0x4f273ff8f4
10

Final *p: 20*/