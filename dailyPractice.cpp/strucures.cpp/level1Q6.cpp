//6. Calculate the average marks of all students and then print details.

#include <iostream>
using namespace std;

// Step 1: Structure to hold student data
// One structure = one student
struct Student {
    string name;
    string subject;
    int rollno;
    int marks;
};

int main() {
    int n = 5; // Number of students

    // Step 2: Create array of structure
    // Like making 5 boxes, each box is a Student
    Student s[5];

    // Step 3: Take Input from User
    // Loop for n students
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details of student " << i + 1 << " ---\n";

        cout << "Enter name: ";
        cin >> s[i].name; // s[i] means i-th student

        cout << "Enter rollno: ";
        cin >> s[i].rollno;

        cout << "Enter subject: ";
        cin >> s[i].subject;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    // Step 4: Calculate Average
    int totalMarks = 0; // To store sum of all marks

    for (int i = 0; i < n; i++) {
        totalMarks = totalMarks + s[i].marks; // Add each student's marks
    }

    // Average formula = Total / Number of students
    // Use float to get decimal value, not int
    float average = (float)totalMarks / n;

    // Step 5: Display Result
    cout << "\n---------- RESULT ----------\n";
    cout << "Total Marks of " << n << " students = " << totalMarks << endl;
    cout << "Average Marks = " << average << endl;

    //  Display all students data
    cout << "\n--- Student Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << s[i].rollno << " | " << s[i].name << " | "
             << s[i].subject << " | " << s[i].marks << endl;
    }

    return 0;
}