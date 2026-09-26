// Count positive, negative and zero values using pointers
#include<iostream>
using namespace std;

int main(){
    int n[] = {10, -2, 0, 5, -8, 0, 3, -1};
    int *p = &n[0]; // pointer to first element
    int length = sizeof(n) / sizeof(n[0]);

    int posCount = 0;
    int negCount = 0;
    int zeroCount = 0;

    for(int i = 0; i < length; i++){
        if(*p > 0){
            posCount++;
        }
        else if(*p < 0){
            negCount++;
        }
        else{
            // if *p == 0
            zeroCount++;
        }
        p++; // move to next element
    }

    cout << "Positive: " << posCount << endl;
    cout << "Negative: " << negCount << endl;
    cout << "Zero: " << zeroCount << endl;

    return 0;
}/*
PS C:\Users\jayendra kumar\Desktop\CPP\POINTERS\output> & .\'level3Q5.exe'
Positive: 3
Negative: 3
Zero: 2*/