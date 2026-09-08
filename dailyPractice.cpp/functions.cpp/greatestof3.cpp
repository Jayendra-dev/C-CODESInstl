#include<iostream>
using namespace std;
int Greatest(int a, int b, int c){
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main(){
    int n,n1,n2;
    cout<<"Enter three numbers: ";
    cin>>n>>n1>>n2;
    int ans = Greatest(n,n1,n2); // Store returned value
    cout<< ans << " is the greatest";
    return 0;
}