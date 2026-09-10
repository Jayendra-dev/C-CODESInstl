//write a function to caclculate percentage of marks obtained in five subjects.
#include<iostream>
using namespace std;
float Percentage(float m1,float m2,float m3,float m4,float m5){
    float total_obtain_Marks = m1+m2+m3+m4+m5;
    float percent = (total_obtain_Marks / 500.0f) * 100;
    return percent;
}
int main(){
    float m1,m2,m3,m4,m5;
    cout<<"enter marks of 5 subjects: ";
    cin>>m1>>m2>>m3>>m4>>m5;
    // Validation AFTER input
    if(m1>100 || m2>100 || m3>100 || m4>100 || m5>100 || m1<0 || m2<0 || m3<0 || m4<0 || m5<0){
        cout<<"please enter correct marks (0-100)"<<endl;
        return 0; // stop program
    }

    cout<<"total_percentage: "<< Percentage(m1,m2,m3,m4,m5) << "%";
    return 0;
}