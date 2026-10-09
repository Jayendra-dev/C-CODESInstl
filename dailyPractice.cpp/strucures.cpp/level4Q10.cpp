//10. Find maximum salary using a structure pointer.

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of employees." << endl;
        return 0;
    }

    // Dynamically allocate an array of structures
    Employee* ptr = new Employee[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> ws;
        getline(cin, ptr[i].name);

        cout << "ID: ";
        cin >> ptr[i].id;

        cout << "Salary: ";
        cin >> ptr[i].salary;
    }

    // Assume the first employee has the maximum salary
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (ptr[i].salary > ptr[maxIndex].salary) {
            maxIndex = i;
        }
    }

    // Display the employee with maximum salary
    cout << "\n--- Highest Salary Employee ---\n";
    cout << "Name: " << ptr[maxIndex].name << endl;
    cout << "ID: " << ptr[maxIndex].id << endl;
    cout << "Salary: " << ptr[maxIndex].salary << endl;

    // Release dynamically allocated memory
    delete[] ptr;
    ptr = nullptr;

    return 0;
}
/*
Enter number of employees: 3

Enter details of employee 1:
Name: jayendra
ID: 1
Salary: 80000 

Enter details of employee 2:
Name: toni
ID: 2
Salary: 50000

Enter details of employee 3:
Name: vijay
ID: 3
Salary: 60000

--- Highest Salary Employee ---
Name: jayendra
ID: 1
Salary: 80000*/