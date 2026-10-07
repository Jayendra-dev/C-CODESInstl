// 7.  Dynamically allocate one structure using new

#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Student
{
    string Name;
    int RollNo;
    float Marks;
};

int main()
{
    // Dynamically allocate memory for ONE Student structure
    Student *ptr = new Student;

    // Taking input using pointer
    cout << "Enter student name: ";
    getline(cin, ptr->Name);

    cout << "Enter Roll No: ";
    cin >> ptr->RollNo;

    cout << "Enter Marks: ";
    cin >> ptr->Marks;

    // Displaying data using pointer
    cout << "\n========== Student Details ==========\n";

    cout << "Name   : " << ptr->Name << endl;
    cout << "Roll No: " << ptr->RollNo << endl;
    cout << "Marks  : " << ptr->Marks << endl;

    // Release dynamically allocated memory
    delete ptr;

    // Avoid using ptr after delete
    ptr = nullptr;

    return 0;
}/*
OUTPUT:
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level4Q7.exe'
Enter student name: jayendr
Enter Roll No: 1 
Enter Marks: 89

========== Student Details ==========
Name   : jayendr
Roll No: 1
Marks  : 89*/