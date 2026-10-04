//. Sort employees according to salary.
#include<iostream>
#include<vector> // Needed for vector<Employee>
using namespace std;

// Step 1: Define a structure to hold all details of one employee together
struct Employee{
    string name;
    int id;
    string department;
    double salary; // Salary can be decimal, so double is better than int
};

int main(){
    int n;
    cout<<"enter no.of employees: ";
    cin>>n;

    // Step 2: Use vector for dynamic size (size 'n' is decided at runtime)
    vector<Employee> emp(n);

    // Step 3: Input loop - Take details of each employee
    for(int i=0; i<n; i++){
        cout<<"\nenter details for employee "<<i+1<<endl;

        cout<<"enter name: ";
        cin>>ws; // ws removes leftover newline before getline
        getline(cin, emp[i].name);

        cout<<"enter id: ";
        cin>>emp[i].id;

        cout<<"enter department: ";
        cin>>ws;
        getline(cin, emp[i].department);

        cout<<"enter salary: ";
        cin>>emp[i].salary;
    }

    // Step 4: SORTING - Sort employees according to salary (ascending order)
    // We use Bubble Sort: compare adjacent salaries and swap if out of order
    for(int i=0; i<n-1; i++){ // Number of passes
        for(int j=0; j<n-i-1; j++){ // Compare pairs
            // If current salary is greater than next, swap entire employee records
            if(emp[j].salary > emp[j+1].salary){
                Employee temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }

    // Step 5: Output loop - Display sorted list
    cout<<"\n--- Employees Sorted by Salary (Low to High) ---\n";
    for(int i=0; i<n; i++){
        cout<<"ID: "<<emp[i].id<<", ";
        cout<<"Name: "<<emp[i].name<<", ";
        cout<<"Department: "<<emp[i].department<<", ";
        cout<<"Salary: "<<emp[i].salary<<endl;
    }

    return 0;
}
//OUTPUT:
/*enter no.of employees: 2

enter details for employee 1
enter name: jayendra
enter id: 123
enter department: cs
enter salary: 80000

enter details for employee 2
enter name: Toni
enter id: 124
enter department: cs
enter salary: 50000

--- Employees Sorted by Salary (Low to High) ---
ID: 124, Name: Toni, Department: cs, Salary: 50000
ID: 123, Name: jayendra, Department: cs, Salary: 80000*/