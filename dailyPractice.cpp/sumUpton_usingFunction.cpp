//print sum upto n using functions
#include<iostream>
using namespace std;
int sumUptoN(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
    return sum;
}
int main(){
	cout<<"sum:=  "<<sumUptoN(5)<<endl;
	cout<<"sum=   "<<sumUptoN(10)<<endl;
	return 0;
}