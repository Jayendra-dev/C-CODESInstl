//Write a function to convert celsius in Fahrenheit.
#include<iostream>
using namespace std;
float Temperature(float c){
    float f=(c*9/5)+32;
    return f;
}
int main(){
    float c;
    cout<<"enter celsius temperature:";
    cin>>c;
    cout<<"temperature in Farenheit:"<<Temperature(c);
    return 0;

}
