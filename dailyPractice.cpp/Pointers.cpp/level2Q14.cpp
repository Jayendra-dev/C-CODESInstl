//Determine *(a+4)
#include<iostream>
using namespace std;

int main(){
    // Array declaration: a is stored continuously in memory
    // Memory: [10][20][30][40][50]
    // Index: 0 1 2 3 4
    // Address: 1000 1004 1008 1012 1016 (assuming int = 4 bytes)
    int a[5] = {10,20,30,40,50};

    // p = &a[0] -> p points to first element
    // a itself is also = &a[0] (except sizeof difference)
    int *p = &a[0];

    // CONCEPT 1: Array name decays to pointer
    // a -> address of a[0]

    // CONCEPT 2: Pointer Arithmetic
    // (a+4) -> a + 4 * sizeof(int) -> address of a[4]

    // CONCEPT 3: Dereferencing *
    // *(a+4) -> value at address (a+4) -> value at a[4] -> 50

    cout << *(a+4); // Output: 50

    // Extra for revision:
    // cout << a[4]; // 50 - Same
    // cout << *(p+4); // 50 - Same via p
    // cout << p[4]; // 50 - Same
    // cout << 4[a]; // 50 - Weird but valid! Because a[4] = *(a+4) = *(4+a) = 4[a]

    return 0;
}