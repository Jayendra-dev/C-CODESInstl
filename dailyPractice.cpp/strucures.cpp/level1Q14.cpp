//14. Find students whose marks are greater than the average.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter roll, name and marks of student " << i+1 << ": ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
        sum += s[i].marks;
    }

    float avg = (float)sum / n;
    cout << "\nAverage marks = " << avg << endl;

    cout << "Students with marks greater than average:\n";
    for (int i = 0; i < n; i++) {
        if (s[i].marks > avg) {
            cout << "Roll: " << s[i].roll
                 << ", Name: " << s[i].name
                 << ", Marks: " << s[i].marks << endl;
        }
    }

    return 0;
}
/*enter number of students: 2
Enter roll, name and marks of student 1: 1
jayendra
86 
Enter roll, name and marks of student 2: 2
toni
87

Average marks = 86.5
Students with marks greater than average:
Roll: 2, Name: toni, Marks: 87*/