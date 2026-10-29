//20. Represent a polynomial using structures.

#include <iostream>
using namespace std;

// Structure to represent a polynomial term
struct Polynomial {
    int coefficient;
    int exponent;
};

int main() {

    Polynomial p[10];
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    // Input polynomial terms
    cout << "Enter coefficient and exponent:\n";

    for(int i = 0; i < n; i++) {

        cout << "Term " << i + 1 << ": ";

        cin >> p[i].coefficient;
        cin >> p[i].exponent;
    }

    // Display polynomial
    cout << "\nPolynomial: ";

    for(int i = 0; i < n; i++) {

        cout << p[i].coefficient
             << "x^"
             << p[i].exponent;

        if(i != n - 1) {
            cout << " + ";
        }
    }

    cout << endl;

    return 0;
}
/*Enter number of terms: 3
Enter coefficient and exponent:
Term 1: 1
2
Term 2: 3
4
Term 3: 4
5

Polynomial: 1x^2 + 3x^4 + 4x^5*/