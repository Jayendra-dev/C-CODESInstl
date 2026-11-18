//7. What happens if a pointer is declared but not initialized? Demonstrate the danger.
#include <iostream>
using namespace std;

int main()
{
    int *p;       // Uninitialized pointer

    cout << *p;   // Dangerous!

    return 0;
}
//993137984  ,it will give some  random value
/*When we use *p, we are trying to access the value at an unknown memory address.

This causes Undefined Behaviour (UB).

Possible outcomes include:
- Program crashes.
- Garbage or unexpected output appears.
- Program behaves unpredictably.
- It may appear to work on one execution and fail on another.
The exact result cannot be guaranteed.*/

