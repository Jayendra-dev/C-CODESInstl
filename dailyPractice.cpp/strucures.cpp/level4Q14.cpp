
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    // Step 1: Dynamically allocate one employee record
    Employee* ptr = new Employee;

    // Step 2: Take input through the pointer
    cout << "Enter employee ID: ";
    cin >> ptr->id;

    cout << "Enter employee name: ";
    cin >> ptr->name;

    cout << "Enter employee salary: ";
    cin >> ptr->salary;

    // Step 3: Display employee details
    cout << "\n--- Employee Record ---\n";
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Salary: " << ptr->salary << endl;

    // Step 4: Release dynamically allocated memory
    delete ptr;
    ptr = nullptr;

    return 0;
}
/*
Output:
Enter employee ID: 12
Enter employee name: Jayendra
Enter employee salary: 80000

--- Employee Record ---
ID: 12
Name: Jayendra
Salary: 80000*/