//calculate sum of digits using functions
#include<iostream>
using namespace std;
int digitSum(int n){
	int sum=0;
	while(n>0){
		int lastdigit=n%10;
		n/=10;
		sum +=lastdigit;
	}
	return sum;
	
}
int main(){
	int n;
	cout<<"enter two digit number or mare than two: ";
	cin>>n;
	if(n<10){
		cout<<"please enter number having two digit or more"<<endl;
	}
	else{
		
		cout<<"sum="<<digitSum(n);
	}
	return 0;
}