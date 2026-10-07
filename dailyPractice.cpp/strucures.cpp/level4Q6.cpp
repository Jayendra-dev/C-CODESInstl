// 6. Traverse an array of structures using a pointer

#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Student
{
    string Name;
    double Rollno;
    float Marks;
};

int main()
{
    const int n = 5;

    // Create an array of 5 Student structures
    Student s[n];

    // Pointer pointing to the first element of the structure array
    Student *ptr = s;

    // ---------------------------------------------------
    // Taking input for each student
    // ---------------------------------------------------
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";

        // Clear the newline left in the input buffer
        cin >> ws;

        cout << "Enter student's name: ";
        getline(cin, s[i].Name);

        cout << "Enter Roll No: ";
        cin >> s[i].Rollno;

        cout << "Enter Marks: ";
        cin >> s[i].Marks;
    }

    // ---------------------------------------------------
    // Traversing the array using a pointer
    // ---------------------------------------------------
    cout << "\n========== Student Details ==========\n";

    for (int i = 0; i < n; i++)
    {
        // ptr + i points to the ith Student structure
        cout << "\nStudent " << i + 1 << ":\n";

        cout << "Name   : " << (ptr + i)->Name << endl;
        cout << "Roll No: " << (ptr + i)->Rollno << endl;
        cout << "Marks  : " << (ptr + i)->Marks << endl;
    }

    return 0;
}/*
output:
Enter details of Student 1:
jayendra kumar
Enter student's name: Enter Roll No: 1
Enter Marks: 89

Enter details of Student 2:
toni
Enter student's name: Enter Roll No: 2
Enter Marks: 86 

Enter details of Student 3:
vijay
Enter student's name: Enter Roll No: 3
Enter Marks: 78

Enter details of Student 4:
aditya
Enter student's name: Enter Roll No: 4
Enter Marks: 79

Enter details of Student 5:
sajal
Enter student's name: Enter Roll No: 5
Enter Marks: 67

========== Student Details ==========

Student 1:
Name   : jayendra kumar
Roll No: 1
Marks  : 89

Student 2:
Name   : toni
Roll No: 2
Marks  : 86

Student 3:
Name   : vijay
Roll No: 3
Marks  : 78

Student 4:
Name   : aditya
Roll No: 4
Marks  : 79

Student 5:
Name   : sajal
Roll No: 5
Marks  : 67
PS D:\cpp\CPP\StructuresInCPP\output> */