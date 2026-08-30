//write a function to calculate area and circumference of circle
//logic A.O.Circle=3.14*r*r,
//circumference of circle =2*3.14*r
#include<iostream>
using namespace std;
double Area(int r){
    float cArea=3.14*r*r;
    return cArea;
}
double circumference(int r){
    float cir=2*3.14*r;
    return cir;
}


int main(){
    double r;
    cout<<"enter raduis:";
    cin>>r;
    cout<<Area(r)<<endl;
    cout<<circumference(r);
    return 0;
    
}