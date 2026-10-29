//18. Represent a student-course relationship using structures.

#include <iostream>
using namespace std;

// Structure to store course details
struct Course {
    int courseId;
    string courseName;
};

// Structure to store student details
struct Student {
    int rollNo;
    string studentName;

    Course courses[5]; // Array of courses
    int courseCount;
};

int main() {

    Student s1;

    // Student information
    s1.rollNo = 101;
    s1.studentName = "Rahul";

    // Enrolled courses
    s1.courseCount = 3;

    s1.courses[0] = {1, "DSA"};
    s1.courses[1] = {2, "DBMS"};
    s1.courses[2] = {3, "Java"};

    // Display student details
    cout << "Student Details\n";

    cout << "Roll Number: " << s1.rollNo << endl;
    cout << "Name: " << s1.studentName << endl;

    cout << "\nEnrolled Courses:\n";

    for(int i = 0; i < s1.courseCount; i++) {

        cout << s1.courses[i].courseId
             << " - "
             << s1.courses[i].courseName
             << endl;
    }

    return 0;
}
/*OUTPUT:
Student Details
Roll Number: 101
Name: Rahul

Enrolled Courses:
1 - DSA
2 - DBMS
3 - Java*/