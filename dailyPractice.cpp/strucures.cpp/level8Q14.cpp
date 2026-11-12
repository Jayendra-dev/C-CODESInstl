//Represent Sparse Matrices Using Structures in C++
#include <iostream>
using namespace std;

// Structure to store sparse matrix information
struct Sparse
{
    int row;
    int col;
    int value;
};

int main()
{
    int a[10][10];
    int r, c;
    int k = 1;

    // Array of structures
    Sparse s[101];

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    // Input matrix
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];

            // Store only non-zero elements
            if (a[i][j] != 0)
            {
                s[k].row = i;
                s[k].col = j;
                s[k].value = a[i][j];

                k++;
            }
        }
    }

    // Store metadata in first row
    s[0].row = r;
    s[0].col = c;
    s[0].value = k - 1;

    // Display sparse matrix representation
    cout << "\nSparse Matrix (3-Tuple):\n";

    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i < k; i++)
    {
        cout << s[i].row << "\t"
             << s[i].col << "\t"
             << s[i].value << endl;
    }

    return 0;
}
//output
/*PS D:\cpp> cd 'd:\cpp\CPP\StructuresInCPP\output'
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level8Q4.exe'
Enter number of rows: 2
Enter number of columns: 2
Enter matrix elements:
1
2
3
4

Sparse Matrix (3-Tuple):
Row     Column  Value
2       2       4
0       0       1
0       1       2
1       0       3
1       1       4
PS D:\cpp\CPP\StructuresInCPP\output> l
*/