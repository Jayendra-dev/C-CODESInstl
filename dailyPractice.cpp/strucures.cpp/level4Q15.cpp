//15. Delete dynamically allocated structure memory correctly.

#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    // 1. Dynamically allocate memory
    Employee* ptr = new Employee;

    // 2. Take employee details
    cout << "Enter employee ID: ";
    cin >> ptr->id;

    cout << "Enter employee name: ";
    cin >> ptr->name;

    cout << "Enter employee salary: ";
    cin >> ptr->salary;

    // 3. Display employee details
    cout << "\n--- Employee Details ---\n";
    cout << "ID: " << ptr->id << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Salary: " << ptr->salary << endl;

    // 4. Release dynamically allocated memory
    delete ptr;
    ptr = nullptr;

    cout << "\nDynamic memory released successfully.\n";

    return 0;
}
/*OUTPUT:
Enter employee ID: 12
Enter employee name: Jayendra
Enter employee salary: 90000 

--- Employee Details ---
ID: 12
Name: Jayendra
Salary: 90000

Dynamic memory released successfully.*/