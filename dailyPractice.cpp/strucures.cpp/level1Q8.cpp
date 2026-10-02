//. Search for a student using roll number.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    // Input students data
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter Roll No: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> ws; //clears whitespace by
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    // Search part
    int searchRoll;
    cout << "\nEnter Roll No to search: ";
    cin >> searchRoll;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (s[i].rollNo == searchRoll) {
            cout << "\nStudent Found!\n";
            cout << "Roll No: " << s[i].rollNo << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent with Roll No " << searchRoll << "not found!" << endl;
    }

    return 0;
}
/*OUTPUT:
Enter number of students: 5

Student 1:
Enter Roll No: 1
Enter Name: Jayenda
Enter Marks: 19

Student 2:
Enter Roll No: 2
Enter Name: Toni
Enter Marks: 26

Student 3:
Enter Roll No: 3
Enter Name: Aditya
Enter Marks: 21

Student 4:
Enter Roll No: 4
Enter Name: Vijay
Enter Marks: 21

Student 5:
Enter Roll No: 5
Enter Name: Sajal
Enter Marks: 26

Enter Roll No to search: 5

Student Found!
Roll No: 5
Name: Sajal
Marks: 26*/