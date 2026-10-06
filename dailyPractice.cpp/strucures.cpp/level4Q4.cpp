//4. Modify structure data through a pointer.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

void modify(Student *p) {
    // Modifying original data using pointer
    p->marks = p->marks + 10;
    p->name = "Topper_" + p->name;
}

int main() {
    Student s1;

    cout << "Enter name and marks: ";
    cin >> s1.name >> s1.marks;

    cout << "\nBefore modify: " << s1.name << " - " << s1.marks << endl;

    modify(&s1); // Pass address

    cout << "After modify: " << s1.name << " - " << s1.marks << endl;

    return 0;
}