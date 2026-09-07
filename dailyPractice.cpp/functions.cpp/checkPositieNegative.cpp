// check positive negative using functions
#include<iostream>
using namespace std;
int check(int n){
    if(n>0){
        cout<<" entered number is positive number";
    }else if(n<0){
        cout<<" entered number is negative number";
    }else{
        cout<<"Zero";
    }
}
int main(){
    int n;
    cout<<"enter  number";
    cin>>n;
    cout<<check(n);

}