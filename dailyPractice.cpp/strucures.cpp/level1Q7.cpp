//7. Count students who scored above 75.
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

    Student s[n]; // array size = n
    int count = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";

        cout << "Enter Roll No: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> ws; // to clear extra enter
        getline(cin, s[i].name); // can read full name like Amit Kumar

        cout << "Enter Marks: ";
        cin >> s[i].marks;

        if (s[i].marks > 75) {
            count++;
        }
    }

    cout << "\nTotal students above 75 marks: " << count << endl;

    cout << "\nTheir names:\n";
    for (int i = 0; i < n; i++) {
        if (s[i].marks > 75) {
            cout << s[i].name << " - " << s[i].marks << endl;
        }
    }

    return 0;
}
/*output:
Enter number of students: 5

Student 1:
Enter Roll No: 1
Enter Name: jayendra
Enter Marks: 78

Student 2:
Enter Roll No: 2
Enter Name: Toni
Enter Marks: 89

Student 3:
Enter Roll No: 87
Enter Name: Aditya
Enter Marks: 98

Student 4:
Enter Roll No: 12   
Enter Name: Vijay
Enter Marks: 65

Student 5:
Enter Roll No: 5    
Enter Name: Sajal
Enter Marks: 55

Total students above 75 marks: 3

Their names:
jayendra - 78
Toni - 89
Aditya - 98*/
