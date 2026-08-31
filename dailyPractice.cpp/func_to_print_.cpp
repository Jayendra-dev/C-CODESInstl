//Write a function to print squares of the first 5 natural numbers
#include<iostream>
using namespace std;
int Square(int n){
	 return n*n;
}
int main(){
	for(int i=1;i<=5;i++){
	    cout<<Square(i)<<"\n";}


	return 0;
}
