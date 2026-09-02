#include <iostream>
using namespace std;
double divide(double a, double b)
{
    return a / b;
}
int main(){
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 == 0){
        cout << "Division by zero is not allowed." << endl;
    }
    else{
        double result = divide(num1, num2);
        cout << "Quotient = " << result << endl;
    }

    return 0;
}