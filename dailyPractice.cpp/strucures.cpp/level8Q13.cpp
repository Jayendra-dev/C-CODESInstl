//Program: Polynomial Representation Using Structures and Addition in C++

#include <iostream>
using namespace std;

// Structure to represent each polynomial term
struct Term
{
    int coeff;
    int exp;
};

// Function to read a polynomial
void readPolynomial(Term p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter coefficient and exponent: ";
        cin >> p[i].coeff >> p[i].exp;
    }
}

// Function to display a polynomial
void displayPolynomial(Term p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (p[i].coeff == 0)
            continue;

        if (i > 0 && p[i].coeff > 0)
            cout << " + ";

        if (p[i].coeff < 0)
            cout << " - ";

        int c = p[i].coeff;

        if (c < 0)
            c = -c;

        cout << c;

        if (p[i].exp != 0)
            cout << "x";

        if (p[i].exp > 1)
            cout << "^" << p[i].exp;
    }

    cout << endl;
}

// Function to add two polynomials
void addPolynomial(Term p1[], int n1,
                   Term p2[], int n2,
                   Term result[], int &n3)
{
    int i = 0, j = 0;
    n3 = 0;

    while (i < n1 && j < n2)
    {
        if (p1[i].exp == p2[j].exp)
        {
            result[n3].coeff = p1[i].coeff + p2[j].coeff;
            result[n3].exp = p1[i].exp;

            if (result[n3].coeff != 0)
                n3++;

            i++;
            j++;
        }
        else if (p1[i].exp > p2[j].exp)
        {
            result[n3] = p1[i];
            n3++;
            i++;
        }
        else
        {
            result[n3] = p2[j];
            n3++;
            j++;
        }
    }

    // Copy remaining terms of first polynomial
    while (i < n1)
    {
        result[n3] = p1[i];
        n3++;
        i++;
    }

    // Copy remaining terms of second polynomial
    while (j < n2)
    {
        result[n3] = p2[j];
        n3++;
        j++;
    }
}

int main()
{
    Term p1[20], p2[20], result[40];

    int n1, n2, n3;

    cout << "Enter number of terms in first polynomial: ";
    cin >> n1;

    cout << "Enter terms in descending order of exponent:\n";
    readPolynomial(p1, n1);

    cout << "\nEnter number of terms in second polynomial: ";
    cin >> n2;

    cout << "Enter terms in descending order of exponent:\n";
    readPolynomial(p2, n2);

    cout << "\nFirst Polynomial: ";
    displayPolynomial(p1, n1);

    cout << "Second Polynomial: ";
    displayPolynomial(p2, n2);

    addPolynomial(p1, n1, p2, n2, result, n3);

    cout << "\nResultant Polynomial: ";
    displayPolynomial(result, n3);

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level8Q13.exe'
Enter number of terms in first polynomial: 2
Enter terms in descending order of exponent:
Enter coefficient and exponent: 3
2
Enter coefficient and exponent: 4
2

Enter number of terms in second polynomial: 1
Enter terms in descending order of exponent:
Enter coefficient and exponent: 12
1

First Polynomial: 3x^2 + 4x^2
Second Polynomial: 12x

Resultant Polynomial: 3x^2 + 4x^2 + 12x*/