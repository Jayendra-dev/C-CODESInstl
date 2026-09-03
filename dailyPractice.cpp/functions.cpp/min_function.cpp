// find minimum of the two numbers
#include<iostream>
using namespace std;
int minimum(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main (){
    int a,b;
    cout<<"enter first numbers";
    cin>>a;
    cout<<"enter second numbers";
    cin>>b;
    if(a==b){
        cout<<"enter different numbers";
    }
    cout<<minimum(a,b);
}
