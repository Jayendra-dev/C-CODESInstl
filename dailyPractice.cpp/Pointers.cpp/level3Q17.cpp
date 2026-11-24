//  Count vowels using a character pointer

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char *ptr;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    ptr = str;  // Pointer stores the address of first character

    while (*ptr != '\0')
    {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U')
        {
            count++;
        }

        ptr++;  // Move pointer to next character
    }

    cout << "Total vowels: " << count;

    return 0;
}
// Enter a string: jayendra
// Total vowels: 3
