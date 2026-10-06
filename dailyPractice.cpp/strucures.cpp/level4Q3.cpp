//3. Pass a structure to a function using a pointer.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

// Function takes structure pointer
void display(Student *p) {
    cout << "\nInside function:\n";
    cout << "Name: " << p->name << endl;
    cout << "Marks: " << p->marks << endl;
}

int main() {
    Student s1;

    cout << "Enter name and marks: ";
    cin >> s1.name >> s1.marks;

    display(&s1); // Pass address

    return 0;
}
//output:
/*Enter name and marks: jayendra
86

Inside function:
Name: jayendra
Marks: 86*/
