//11.Search records using pointers.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    // Dynamically allocate memory for n students
    Student* ptr = new Student[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> ws;
        getline(cin, ptr[i].name);

        cout << "Roll number: ";
        cin >> ptr[i].rollNo;

        cout << "Marks: ";
        cin >> ptr[i].marks;
    }

    // Search by roll number
    int searchRoll;
    bool found = false;

    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++) {
        if (ptr[i].rollNo == searchRoll) {
            cout << "\nStudent record found!\n";
            cout << "Name: " << ptr[i].name << endl;
            cout << "Roll number: " << ptr[i].rollNo << endl;
            cout << "Marks: " << ptr[i].marks << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student record not found." << endl;
    }

    // Release dynamically allocated memory
    delete[] ptr;
    ptr = nullptr;

    return 0;
}
/*OUTPUT:
Enter number of students: 2

Enter details of student 1:
Name: jayendra
Roll number: 78
Marks: 98

Enter details of student 2:
Name: toni
Roll number: 2
Marks: 89 

Enter roll number to search: 78

Student record found!
Name: jayendra
Roll number: 78
Marks: 98*/