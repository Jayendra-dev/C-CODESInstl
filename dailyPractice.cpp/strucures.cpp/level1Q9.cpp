//9. Update a student's marks using roll number.
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

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Enter Roll No: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    // Update part
    int searchRoll;
    cout << "\nEnter Roll No to update marks: ";
    cin >> searchRoll;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (s[i].rollNo == searchRoll) {
            cout << "\nStudent Found: " << s[i].name << " - Marks: " << s[i].marks << endl;

            cout << "Enter new marks: ";
            cin >> s[i].marks;

            cout << "\nMarks updated successfully!" << endl;
            cout<< s[i].name<<"-"<<s[i].marks<<endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nRoll No " << searchRoll << " not found!" << endl;
    }

    return 0;
}
/*OUTPUT:
Enter number of students: 3

Student 1:
Enter Roll No: 1
Enter Name: jayendra
Enter Marks: 89

Student 2:
Enter Roll No: 2
Enter Name: Toni
Enter Marks: 75

Student 3:
Enter Roll No: 3
Enter Name: Aditya
Enter Marks: 57

Enter Roll No to update marks: 3

Student Found: Aditya - Marks: 57
Enter new marks: 87

Marks updated successfully!
Aditya-87*/