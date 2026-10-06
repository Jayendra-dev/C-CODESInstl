//1. Create a structure and access its members using a pointer.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int marks;
};

int main() {
    Student s1;
    Student *ptr;

    ptr = &s1; // ptr points to s1

    // Accessing members using pointer
    cout << "Enter name, age, marks: ";
    cin >> ptr->name >> ptr->age >> ptr->marks;

    cout << "\nUsing pointer:\n";
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}
//OUTPUT:
/*Enter name, age, marks: jayendra
21
78

Using pointer:
Name: jayendra
Age: 21
Marks: 78*/
