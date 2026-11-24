// Count spaces, digits and alphabetic characters using pointers.


#include <iostream>
using namespace std;

int main()
{
    char str[200];
    char *ptr;

    int spaces = 0;
    int digits = 0;
    int alphabets = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    ptr = str;  // Pointer points to first character

    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            spaces++;
        }
        else if (*ptr >= '0' && *ptr <= '9')
        {
            digits++;
        }
        else if ((*ptr >= 'A' && *ptr <= 'Z') ||
                 (*ptr >= 'a' && *ptr <= 'z'))
        {
            alphabets++;
        }

        ptr++;  // Move to next character
    }

    cout << "\nTotal spaces: " << spaces;
    cout << "\nTotal digits: " << digits;
    cout << "\nTotal alphabets: " << alphabets;

    return 0;
    
}
/*Enter a string: my name is JayendraL14

Total spaces: 3
Total digits: 2
Total alphabets: 17*/