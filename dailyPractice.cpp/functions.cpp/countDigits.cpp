//count digits in a number
#include<iostream>
using namespace std;
int counDigit(int n){
    if (n==0){
       return 1;
    }
    int count=0;
    while (n!=0){
        n=n/10;
       count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<counDigit(n);



}