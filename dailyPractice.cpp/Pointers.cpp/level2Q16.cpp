//Explain why p + 1 does not necessarily mean address + 1 byte
#include<iostream>
using namespace std;

int main(){
    int n[5]={1,2,3,4,5};
    int *p = &n[0]; // p points to n[0]

    cout << "Address of p ( &n[0] ) : " << p << endl;
    cout << "Address of p+1 ( &n[1] ) : " << p+1 << endl;

    // Proof that difference is not 1 byte
    cout << "\nDifference in bytes : " << (char*)(p+1) - (char*)p << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;

    cout << "\nValue at *p : " << *p << endl;
    cout << "Value at *(p+1) : " << *(p+1) << endl;
    cout << "Value at *(p+2) : " << *(p+2) << endl;

    // Extra proof with char pointer
    char *cp = (char*)p;
    cout << "\nIf it was char*, cp+1 would be : " << (void*)(cp+1) << " (only 1 byte ahead)" << endl;

    return 0;
}
/*
output:
PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level2Q16.exe'
Address of p ( &n[0] ) : 0xf6c9dff8b0
Address of p+1 ( &n[1] ) : 0xf6c9dff8b4

Difference in bytes : 4 bytes
Size of int : 4 bytes

Value at *p : 1
Value at *(p+1) : 2
Value at *(p+2) : 3*/