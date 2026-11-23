
#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    char *ptr1 = str1;
    char *ptr2 = str2;

    // Compare characters one by one
    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2)
        {
            cout << "Strings are not same.";
            return 0;
        }

        ptr1++;
        ptr2++;
    }

    // Check whether both strings ended together
    if (*ptr1 == '\0' && *ptr2 == '\0')
    {
        cout << "Strings are same.";
    }
    else
    {
        cout << "Strings are not same.";
    }

    return 0;
}

/*Enter first string: jayednrakumar
Enter second string: jayendrakumar
Strings are not same.*/