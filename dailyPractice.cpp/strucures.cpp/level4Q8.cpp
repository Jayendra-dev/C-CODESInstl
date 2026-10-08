//8. Dynamically allocate 5 structures.

#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {

    // Dynamically allocate 5 Student structures
    Student* ptr = new Student[5];

    // Input
    for (int i = 0; i < 5; i++) {
        cout << "Enter details of Student " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> ptr[i].name;

        cout << "Roll No: ";
        cin >> ptr[i].rollNo;

        cout << "Marks: ";
        cin >> ptr[i].marks;

        cout << endl;
    }

    // Display
    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << ptr[i].name << endl;
        cout << "Roll No: " << ptr[i].rollNo << endl;
        cout << "Marks: " << ptr[i].marks << endl;
        cout << endl;
    }

    // Free dynamically allocated memory
    delete[] ptr;

    return 0;
}
/*output:
Enter details of Student 1:
Name: jayendra
Roll No: 1
Marks: 78

Enter details of Student 2:
Name: toni
Roll No: 2
Marks: 98

Enter details of Student 3:
Name: aditya
Roll No: 3
Marks: 87

Enter details of Student 4:
Name: vijay
Roll No: 45
Marks: 67

Enter details of Student 5:
Name: saja
Roll No: 5
Marks: 76


--- Student Details ---
Student 1
Name: jayendra
Roll No: 1
Marks: 78

Student 2
Name: toni
Roll No: 2
Marks: 98

Student 3
Name: aditya
Roll No: 3
Marks: 87

Student 4
Name: vijay
Roll No: 45
Marks: 67

Student 5
Name: saja
Roll No: 5
Marks: 76

*/