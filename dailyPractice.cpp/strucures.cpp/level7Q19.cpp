//19. Represent a sparse matrix using structures.

#include <iostream>
using namespace std;

// Structure for storing sparse matrix elements
struct Sparse {
    int row;
    int col;
    int value;
};

int main() {

    int matrix[10][10];
    int rows, cols;
    int k = 1;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Input matrix
    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Structure array
    Sparse s[101];

    // Store matrix information
    s[0].row = rows;
    s[0].col = cols;

    // Store only non-zero elements
    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols; j++) {

            if(matrix[i][j] != 0) {

                s[k].row = i;
                s[k].col = j;
                s[k].value = matrix[i][j];

                k++;
            }
        }
    }

    // Store number of non-zero elements
    s[0].value = k - 1;

    // Display sparse matrix
    cout << "\nTriplet Representation:\n";

    cout << "Row  Column  Value\n";

    for(int i = 0; i < k; i++) {

        cout << s[i].row << "     "
             << s[i].col << "       "
             << s[i].value << endl;
    }

    return 0;
}
/*OUTPUT:
Enter number of rows and columns: 3
3
Enter matrix elements:
1
2
3
4
5
6
7
8
9

Triplet Representation:
Row  Column  Value
3     3       9
0     0       1
0     1       2
0     2       3
1     0       4
1     1       5
1     2       6
2     0       7
2     1       8
2     2       9
 */