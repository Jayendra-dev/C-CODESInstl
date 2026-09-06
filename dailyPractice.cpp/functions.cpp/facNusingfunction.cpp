//write a function to print factorial of a number given by user.
#include <iostream>
using namespace std;
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial = " << factorial(n);
    return 0;
}