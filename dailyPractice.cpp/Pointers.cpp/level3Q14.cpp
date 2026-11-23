//14. Copy One String to Another Without strcpy() Using Pointers in C++

#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    char *ptr1 = str1;  // Source pointer
    char *ptr2 = str2;  // Destination pointer

    // Copy characters using pointers
    while (*ptr1 != '\0')
    {
        *ptr2 = *ptr1;

        ptr1++;
        ptr2++;
    }

    // Add null character at the end
    *ptr2 = '\0';

    cout << "Original string: " << str1 << endl;
    cout << "Copied string: " << str2 << endl;

    return 0;
}
// Enter a string: jayendr akumar
// Original string: jayendr akumar
// Copied string: jayendr akumar