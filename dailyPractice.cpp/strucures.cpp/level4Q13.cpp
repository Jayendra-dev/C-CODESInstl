//13.  Compare . and -> with programs.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s;  // Actual structure object

    s.rollNo = 101;
    s.name = "Amit";
    s.marks = 85.5;

    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
/*OUTPUT:
Roll No: 101
Name: Amit
Marks: 85.5
*/