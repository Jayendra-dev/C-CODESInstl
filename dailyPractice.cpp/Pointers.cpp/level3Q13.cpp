//13. Find String Length Without strlen() Using Pointers in C++

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char *ptr = str;
    int length = 0;

    // Traverse the string using pointer
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }

    cout << "Length of string: " << length;

    return 0;
}
/*PS D:\cpp\CPP\POINTERS\output> & .\'level3Q13.exe'
Enter a string: Jayendra kumar
Length of string: 14*/