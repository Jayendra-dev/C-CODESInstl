//print square of a provided number
#include<iostream>
using namespace std;
int square(int n){
	return n*n;
}
int main(){
	int n;
	cout<<"enter number:";
	cin>>n;
	cout<<square(n);
	return 0;
}