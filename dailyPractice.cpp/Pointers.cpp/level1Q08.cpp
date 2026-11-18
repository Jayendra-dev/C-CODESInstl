/*4. How to avoid this danger?
The safest practice is to initialize pointers with
 nullptr when they do not yet point to a valid object.*/
 #include <iostream>
using namespace std;

int main()
{
    int *p = nullptr;

    if (p == nullptr)
    {
        cout << "Pointer is not pointing to any variable";
    }

    return 0;
}
//Pointer is not pointing to any variable