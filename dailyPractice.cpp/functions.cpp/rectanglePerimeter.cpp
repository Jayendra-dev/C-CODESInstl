//Write a function to calculate the perimeter of a any rectangular objet .

#include<iostream>
using namespace std;
float Perimeter(float l,float b){
    return l*b;
}
int main(){
    float l,b;
    cout<<"enter length of an object:";
    cin>>l;
    cout<<"enter breadth of an object:";
    cin>>b;
    cout<<"Perimeter of rectanglular object:"<<Perimeter(l,b);
    return 0;
}
