// calculate Simple Interest using function
#include<iostream>
using namespace std;
float simpleInterest(float P,float R,float T){
    return P*R*T/100;
}
int main (){
    float P,R,T;
    cout<<"enter the principle";
    cin>>P;
    cout<<"enter rate of interest :";
    cin>>R;
    cout<<"enter time in years :";
    cin>>T;
    cout << simpleInterest(P,R,T);
}