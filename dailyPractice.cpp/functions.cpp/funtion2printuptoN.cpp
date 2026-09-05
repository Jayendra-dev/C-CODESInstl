//write a function to print from upto N.
#include<iostream>
using namespace std;

void printNumbers(int n) {
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}

int main() {
    printNumbers(10);
    return 0;
}