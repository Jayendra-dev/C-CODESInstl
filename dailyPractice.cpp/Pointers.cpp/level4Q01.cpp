// 1.Write a function that changes the value of a variable using pointer

#include <iostream>
using namespace std;

// Function that changes the value using a pointer
void change(int *p){
    *p = 13;
}
int main(){
    int x = 1;
    cout << "Original variable value: " << x << endl;
    int *p = &x;
    change(p);
    cout << "After changing value: " << x << endl;

    return 0;
}

//output
/*Original variable value: 1
After changing value: 13*/