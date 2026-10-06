//2.  Use the -> operator to access structure members.
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee e;
    Employee *p = &e; // pointer to structure

    cout << "Enter id, name, salary: ";
    cin >> p->id >> p->name >> p->salary;

    cout << "\nAccessing using -> operator:\n";
    cout << "ID: " << p->id << endl;
    cout << "Name: " << p->name << endl;
    cout << "Salary: " << p->salary << endl;

    return 0;
}
/*output:
Enter id, name, salary: 12
jayendra
80000

Accessing using -> operator:
ID: 12
Name: jayendra
Salary: 80000*/
