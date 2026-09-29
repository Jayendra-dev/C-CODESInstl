#include<iostream>
using namespace std;

// 1. Structure is ONLY a blueprint. It should NOT have logic like for-loop or cin inside it.
struct Student{ // Changed name to singular, standard practice
    string name;
    int RollNo;
    string Subject;
    int Marks;
}; // Don't forget semicolon after struct

int main(){

    // 2. Array of 5 students. This is the main requirement.
    Student s[5]; // s[0] to s[4] = 5 students

    // 3. Input Loop - Loop should be in main(), not inside struct
    // Mistake in your code: for(int i=0;i<=5;i++) -> this runs 6 times (0,1,2,3,4,5)
    // Correct is i < 5
    for(int i = 0; i < 4; i++){
        cout << "\nEnter details for Student " << i<< ":\n";

        cout << "Enter name: ";
        cin >> s[i].name; // Mistake was cin>> - correct is cin >> and we need to store in s[i].name

        cout << "Enter RollNo: ";
        cin >> s[i].RollNo;

        cout << "Enter subject: ";
        cin >> s[i].Subject;

        cout << "Enter marks: "; // Mistake was comma, instead of <<
        cin >> s[i].Marks; // Mistake was cin>> in your code typed as cin>>
    }

    // 4. Display Loop
    cout << "\n--- Student Records ---\n";
    for(int i = 0; i < 5; i++){
        cout << "\nStudent " << i+1 << ": ";
        cout << s[i].name << ", Roll: " << s[i].RollNo
             << ", Subject: " << s[i].Subject
             << ", Marks: " << s[i].Marks << endl;
    }

    return 0;
}