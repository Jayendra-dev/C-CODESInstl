//write a function to calculate Remainder of two numbers
#include<iostream>
using  namespace std;
int Remainder(int n1,int n2){
    if(n2==0){
        cout<<"division by zero is not possible:";
    }
    return n1%n2;
}
int main(){
    int n1,n2;
    cout<<"enter numbers:";
    cin>>n1>>n2;
    cout<< "Remainder of two numbers:"<<Remainder(n1,n2);
return 0;

}