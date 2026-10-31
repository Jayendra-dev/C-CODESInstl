//1. Employee database with insertion, deletion, searching and sorting.

#include <iostream>
using namespace std;

#define MAX 100

// Structure to store employee information
struct Employee
{
    int id;
    char name[50];
    int age;
    float salary;
};

// Array of structures
Employee emp[MAX];

// Total number of employees
int n = 0;


// 1. INSERT EMPLOYEE
void insertEmployee()
{
    if (n == MAX)
    {
        cout << "\nDatabase is full!";
        return;
    }

    int id;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    // Check whether ID already exists
    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            cout << "\nEmployee ID already exists!";
            return;
        }
    }

    // Store employee details
    emp[n].id = id;

    cout << "Enter Name: ";
    cin >> ws;
    cin.getline(emp[n].name, 50);

    cout << "Enter Age: ";
    cin >> emp[n].age;

    cout << "Enter Salary: ";
    cin >> emp[n].salary;

    n++;

    cout << "\nEmployee inserted successfully!";
}


// 2. DISPLAY EMPLOYEES
void displayEmployees()
{
    if (n == 0)
    {
        cout << "\nNo employee records found!";
        return;
    }

    cout << "\nID\tName\tAge\tSalary\n";

    for (int i = 0; i < n; i++)
    {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << emp[i].age << "\t"
             << emp[i].salary << endl;
    }
}


// 3. SEARCH EMPLOYEE
void searchEmployee()
{
    int id;
    int found = 0;

    cout << "\nEnter Employee ID to search: ";
    cin >> id;

    // Search employee using Linear Search
    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            cout << "\nEmployee Found!";
            cout << "\nID: " << emp[i].id;
            cout << "\nName: " << emp[i].name;
            cout << "\nAge: " << emp[i].age;
            cout << "\nSalary: " << emp[i].salary;

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "\nEmployee not found!";
    }
}


// 4. DELETE EMPLOYEE
void deleteEmployee()
{
    int id;
    int pos = -1;

    cout << "\nEnter Employee ID to delete: ";
    cin >> id;

    // Find employee position
    for (int i = 0; i < n; i++)
    {
        if (emp[i].id == id)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "\nEmployee not found!";
        return;
    }

    // Shift elements one position to the left
    for (int i = pos; i < n - 1; i++)
    {
        emp[i] = emp[i + 1];
    }

    n--;

    cout << "\nEmployee deleted successfully!";
}


// 5. SORT EMPLOYEES BY ID
void sortEmployees()
{
    Employee temp;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (emp[j].id > emp[j + 1].id)
            {
                // Swap employee records
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    cout << "\nEmployees sorted successfully!";

    displayEmployees();
}


// MAIN FUNCTION
int main()
{
    int choice;

    do
    {
        cout << "\n\n===== EMPLOYEE DATABASE =====";
        cout << "\n1. Insert Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Delete Employee";
        cout << "\n5. Sort Employees";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                deleteEmployee();
                break;

            case 5:
                sortEmployees();
                break;

            case 6:
                cout << "\nProgram terminated!";
                break;

            default:
                cout << "\nInvalid choice!";
        }

    } while (choice != 6);

    return 0;
}
/*
===== EMPLOYEE DATABASE =====
1. Insert Employee
2. Display Employees
3. Search Employee
4. Delete Employee
5. Sort Employees
6. Exit
Enter your choice: 1

Enter Employee ID: 01      
Enter Name: jayendra
Enter Age: 21
Enter Salary: 100000 

Employee inserted successfully!

===== EMPLOYEE DATABASE =====
1. Insert Employee
2. Display Employees
3. Search Employee
4. Delete Employee
5. Sort Employees
6. Exit
Enter your choice: 1

Enter Employee ID: 02   
Enter Name: Vijay
Enter Age: 22
Enter Salary: 100000

Employee inserted successfully!

===== EMPLOYEE DATABASE =====
1. Insert Employee
2. Display Employees
3. Search Employee
4. Delete Employee
5. Sort Employees
6. Exit
Enter your choice: 5

Employees sorted successfully!
ID      Name    Age     Salary
1       jayendra        21      100000
2       Vijay   22      100000


===== EMPLOYEE DATABASE =====
1. Insert Employee
2. Display Employees
3. Search Employee
4. Delete Employee
5. Sort Employees
6. Exit
Enter your choice: 6

Program terminated!
PS D:\cpp\CPP\StructuresInCPP\output> */