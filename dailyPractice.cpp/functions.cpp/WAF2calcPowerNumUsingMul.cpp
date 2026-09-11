
// Write a function to calculate the power of a number using multiplication
#include<iostream>
using namespace std;

int Power(int base,int exp){
    if(exp==0){
        return 1; // <-- MUST return 1
    } else {
        int result=1;
        for(int i=0;i<exp;i++){
            result=result*base;
        }
        return result;
    }
}

int main(){
    cout<<Power(2,3); // 8
    cout<<Power(2,0); // 1
    return 0;
}