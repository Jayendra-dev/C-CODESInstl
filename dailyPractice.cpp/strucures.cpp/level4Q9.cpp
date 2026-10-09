//9.Take input into dynamically allocated structures.

#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    // Dynamically allocate one structure
    Student* ptr = new Student;

    // Take input from the user
    cout << "Enter student name: ";
    getline(cin, ptr->name);

    cout << "Enter roll number: ";
    cin >> ptr->rollNo;

    cout << "Enter marks: ";
    cin >> ptr->marks;

    // Display the details
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << ptr->name << endl;
    cout << "Roll Number: " << ptr->rollNo << endl;
    cout << "Marks: " << ptr->marks << endl;

    // Release dynamically allocated memory
    delete ptr;
    ptr = nullptr;

    return 0;
}
//OUTPUT:
//PS D:\cpp\CPP\StructuresInCPP\output> & .\'level4Q9.exe'
/*Enter student name: jayendra kumar
Enter roll number: 1
Enter marks: 78

--- Student Details ---
Name: jayendra kumar
Roll Number: 1
Marks: 78*/
