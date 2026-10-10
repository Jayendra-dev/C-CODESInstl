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
    Student s;       // Actual structure object
    Student* ptr = &s; // Pointer stores address of s

    ptr->rollNo = 102;
    ptr->name = "Ravi";
    ptr->marks = 92.5;

    cout << "Roll No: " << ptr->rollNo << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}
/*
output:
Roll No: 102
Name: Ravi
Marks: 92.5*/