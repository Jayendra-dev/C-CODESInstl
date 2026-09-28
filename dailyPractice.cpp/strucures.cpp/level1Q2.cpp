// Program to create an Employee structure and take user input
#include <iostream>
#include <string>
using namespace std;

// 1. Structure Definition
// A structure is a user-defined data type that groups different variables
struct Employee {
    int ID;         // To store Employee ID
    string name;    // To store Employee name
    int long salary;     // To store Employee salary
};

int main() {
    // 2. Create an object/variable of the structure type
    Employee emp1; // emp1 will hold ID, name, salary together

    // 3. Taking Input from user
    cout << "Enter ID: ";
    cin >> emp1.ID; // Directly store into structure member

    cout << "Enter name: ";
    cin >> emp1.name; // Use getline() if you want full name with spaces

    cout << "Enter salary: ";
    cin >> emp1.salary;

    // 4. Displaying Output -
    cout << "\n--- Employee Details ---\n";
    cout << "ID: " << emp1.ID << endl;
    cout << "Name: " << emp1.name << endl;
    cout << "Salary: " << emp1.salary << endl;

    return 0; // Program ends successfully
}
//output:
/*Enter ID: 123
Enter name: Jayendra
Enter salary: 50000000

--- Employee Details ---
ID: 123
Name: Jayendra
Salary: 50000000*/