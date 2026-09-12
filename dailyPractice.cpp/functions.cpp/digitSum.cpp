// Write a function that returns the sum of digits of a number.
#include <iostream>
using namespace std;

// Function that RETURNS sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    // handle negative numbers
    if (n < 0) n = -n;
    while (n > 0) {
        int digit = n % 10; // get last digit
        sum += digit;
        n = n / 10;         // remove last digit
    }
    return sum;
}
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << "Sum of digits = " << result << endl;
    return 0;
}
