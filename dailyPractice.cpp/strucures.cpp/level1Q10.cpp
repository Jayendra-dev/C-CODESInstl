//10. Sort students according to marks.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string subject;
    int rollNo;
    int marks;
};

int main() {
    int n;
    cout << "Enter no. of Students: ";
    cin >> n;

    Student s[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---" << endl;
        cout << "Enter Name: ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter Subject: ";
        getline(cin, s[i].subject);

        cout << "Enter RollNo: ";
        cin >> s[i].rollNo;

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    // Sorting - Bubble Sort by Marks (Highest to Lowest)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // If current student has less marks than next, swap them
            if (s[j].marks < s[j + 1].marks) {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Output Sorted List
    cout << "\n\n--- Sorted List (Highest Marks First) ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "RollNo: " << s[i].rollNo
             << " | Name: " << s[i].name
             << " | Subject: " << s[i].subject
             << " | Marks: " << s[i].marks << endl;
    }

    return 0;
}
//OUTPUT:
/*Enter no. of Students: 5

--- Student 1 ---
Enter Name: Jayendra kumar
Enter Subject: oop
Enter RollNo: 78
Enter Marks: 19

--- Student 2 ---
Enter Name: Toni Riram
Enter Subject: OOP
Enter RollNo: 64
Enter Marks: 26

--- Student 3 ---
Enter Name: Jyotiraditya Kishore
Enter Subject: OOP
Enter RollNo: 80
Enter Marks: 10

--- Student 4 ---
Enter Name: Vijay Kumar Saw
Enter Subject: OOP 
Enter RollNo: 71
Enter Marks: 21

--- Student 5 ---
Enter Name: Sajal Soni
Enter Subject: OOP 
Enter RollNo: 79
Enter Marks: 26


--- Sorted List (Highest Marks First) ---
RollNo: 64 | Name: Toni Riram | Subject: OOP | Marks: 26
RollNo: 79 | Name: Sajal Soni | Subject: OOP | Marks: 26
RollNo: 71 | Name: Vijay Kumar Saw | Subject: OOP | Marks: 21
RollNo: 78 | Name: Jayendra kumar | Subject: oop | Marks: 19
RollNo: 80 | Name: Jyotiraditya Kishore | Subject: OOP | Marks: 10*/