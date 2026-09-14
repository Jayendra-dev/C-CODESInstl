//write a function to Palindrome
#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome";
    else
        cout << num << " is NOT a Palindrome";

    return 0;
}