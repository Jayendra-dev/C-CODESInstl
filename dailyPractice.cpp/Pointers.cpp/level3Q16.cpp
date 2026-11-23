//16. Reverse a string using pointers.

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    char *start = str;  // Points to first character
    char *end = str;    // Will point to last character

    // Move end pointer to the null character
    while (*end != '\0')
    {
        end++;
    }

    end--;  // Move back to the last actual character

    // Swap characters using pointers
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str;

    return 0;
}
// Enter string: jayendra
// Reversed string: ardneyaj