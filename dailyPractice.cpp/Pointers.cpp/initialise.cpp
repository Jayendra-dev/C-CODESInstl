// What happens if a pointer is declared but not initialized? Demonstrate the danger
#include<iostream>
using namespace std;
int main(){
    int *p; // Wild Pointer - not initialized, contains garbage address

    cout << "Value of uninitialized pointer p (garbage address): " << p << endl;
    cout << "This address is random! If we do *p = 100, program may crash." << endl;
    
    // DANGER: Do not do this
    // *p = 100; // This will try to write to random memory location -> Segmentation Fault / Crash

    // SAFE WAY:
    int x = 10;
    p = &x; // Now initialize it properly
    cout << "\nAfter initialization p = &x" << endl;
    cout << "p (address of x): " << p << endl;
    cout << "*p (value of x): " << *p << endl;

    // BEST PRACTICE - initialize with nullptr
    int *p2 = nullptr; // or NULL
    cout << "\nSafe pointer p2 initialized to nullptr: " << p2 << endl;
    if(p2 == nullptr){
        cout << "p2 is not pointing anywhere, safe to check" << endl;
    }

    return 0;
}
/*output:
p (address of x): 0x14ff7ffa0c
*p (value of x): 10

Safe pointer p2 initialized to nullptr: 0
p2 is not pointing anywhere, safe to check*/ 