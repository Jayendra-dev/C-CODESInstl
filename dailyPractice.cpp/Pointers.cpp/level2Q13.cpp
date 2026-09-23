#include<iostream>
using namespace std;
int main(){
    // --- CONCEPT ---
    // int a[5] = {10,20,30,40,50}
    // Memory: a[0]=10, a[1]=20, a[2]=30, a[3]=40, a[4]=50
    // int *p = &a[0] => p points to first element (a[0])
    // p[3] is compiler magic: p[3] == *(p+3) == a[3]

    int a[5]={10,20,30,40,50};
    int *p=&a[0]; // p stores address of a[0], so *p = 10

    // --- EXPLANATION OF p[3] ---
    // p+0 -> a[0] -> 10
    // p+1 -> a[1] -> 20
    // p+2 -> a[2] -> 30
    // p+3 -> a[3] -> 40 <-- this is what p[3] picks
    // Internally: p[3] = *(p+3) = value at address (p + 3*sizeOf(int))

    cout<<p[3]; // Output: 40

    // --- FOR FUTURE REVISION ---
    // 1. a[3] == *(a+3) == *(p+3) == p[3] -> all four are SAME, all give 40
    // 2. Difference: a is constant pointer (can't do a++), p is variable pointer (can do p++)
    // 3. Trap: p[3] works even if p is pointer, not just array
    // 4. WHY IMPORTANT: This is how array indexing works internally in C++

    return 0;
}
// Output: 40