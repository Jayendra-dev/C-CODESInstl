//4.Find maximum of three numbers using pointers.
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter first number:\n";
    cin>>n1;
    cout<<"enter second number:\n";
    cin>>n2;
    cout<<"enter third number:\n";
    cin>>n3;
    int *p1=&n1;
    int *p2=&n2;
    int *p3=&n3;
    if(*p1>*p2 && *p1>*p3){
        cout<<*p1<<"  ""is greater";

    }else if(*p2>*p1 && *p2>*p3){
        cout<<*p2<<" ""is greater";

    }else{
        cout<<*p3<<"  ""is greater";
    }
    return 0;

}
/*enter first number:
1
enter second number:
56
enter third number:
32
56 is greater*/