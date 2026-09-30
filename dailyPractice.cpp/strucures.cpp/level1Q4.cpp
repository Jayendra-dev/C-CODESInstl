//4. Find the student with the highest marks.
#include <iostream>
#include <string>
using namespace std;

// Step 1: Structure to store student details
// We use struct because we need to group different data types for one student
struct Student {
    string name; // To store student name
    string subject; // To store subject name
    int rollNo; // To store Roll Number
    double marks; // To store marks - double is better for decimal marks
};

int main() {
    int n;

    // Step 2: Take number of students from user
    cout << "Enter number of students: ";
    cin >> n;

    // Ignore the leftover newline character before taking string input
    cin.ignore();

    // Step 3: Create an array of Student structures
    Student s[100]; // Assuming max 100 students

    // Step 4: Take input for each student
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";

        cout << "Enter Name: ";
        getline(cin, s[i].name); // getline is used for full name with spaces

        cout << "Enter Subject: ";
        getline(cin, s[i].subject);

        cout << "Enter Roll No: ";
        cin >> s[i].rollNo;

        cout << "Enter Marks: ";
        cin >> s[i].marks;

        cin.ignore(); // To clear buffer for next getline
    }

    // Step 5: Logic to find student with highest marks
    // We assume first student has highest marks initially
    int highestMarks = 0;

    for (int i = 1; i < n; i++) {
        // If current student's marks is greater than the highest found till now
        if (s[i].marks > s[highestMarks].marks) {
            highestMarks = i; // Update the index
        }
    }

    // Step 6: Display the result
    cout << "\n--- Student with Highest Marks ---\n";
    cout << "Name: " << s[highestMarks].name << endl;
    cout << "Subject: " << s[highestMarks].sghestMarks].rollNo << endl;
    cout << "Marks: " << s[highestMarks].marks << endl;

    return 0;
}
/*Sample Output:*
Enter number of students: 3
ubject << endl;
    cout << "Roll No: " << s[hi
Enter details for Student 1:
Enter Name: Rahul
Enter Subject: DSA
Enter Roll No: 101
Enter Marks: 85.5

Enter details for Student 2:
Enter Name: Priya
Enter Subject: DSA
Enter Roll No: 102
Enter Marks: 92.3

--- Student with Highest Marks ---
Name: Priya
Subject: DSA
Roll No: 102
Marks: 92.3*/