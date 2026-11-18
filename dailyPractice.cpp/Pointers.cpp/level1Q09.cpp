//8. Create a pointer initialized to nullptr and safely check it before dereferencing.
#include <iostream>
using namespace std;

int main()
{
    int *p = nullptr;  // Initialize pointer

    // Check whether pointer is null
    if (p != nullptr)
    {
        cout << "Value: " << *p << endl;
    }
    else
    {
        cout << "Pointer is NULL. Cannot dereference!" << endl;
    }

    return 0;
}
//Pointer is NULL. Cannot dereference!