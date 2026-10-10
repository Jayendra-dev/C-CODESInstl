//12. Sort records using pointers.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamically create an array of structures
    Student* s = new Student[n];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Roll number: ";
        cin >> s[i].rollNo;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Sort records by marks in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if ((s + i)->marks < (s + j)->marks) {
                Student temp = *(s + i);
                *(s + i) = *(s + j);
                *(s + j) = temp;
            }
        }
    }

    // Display sorted records
    cout << "\n--- Students Sorted by Marks ---\n";
    cout << "Roll No\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << (s + i)->rollNo << "\t"
             << (s + i)->name << "\t"
             << (s + i)->marks << "\n";
    }

    // Release dynamically allocated memory
    delete[] s;

    return 0;
}
/*
OUTPUT:
Enter number of students: 3

Enter details of student 1:
Roll number: 1
Name: jayendra
Marks: 89

Enter details of student 2:
Roll number: 2
Name: Toni
Marks: 90

Enter details of student 3:
Roll number: 3
Name: Aditya
Marks: 98

--- Students Sorted by Marks ---
Roll No  Name       Marks
3        Aditya     98
2        Toni       90
1        jayendra   89*/
