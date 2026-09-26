// Count even and odd elements using pointers
#include<iostream>
using namespace std;

int main(){
    int n[] = {1,2,3,4,5,6,7,8,9};
    int *p = &n[0];
    int length = sizeof(n) / sizeof(n[0]);

    int evenCount = 0;
    int oddCount = 0;

    for(int i = 0; i < length; i++){
        // Check the value pointed by pointer, NOT i
        if(*p % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
        p++; // move pointer to next element
    }

    cout << "Even elements = " << evenCount << endl;
    cout << "Odd elements = " << oddCount << endl;

    return 0;
}/*output:
PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level3Q4.exe'
Even elements = 4
Odd elements = 5*/