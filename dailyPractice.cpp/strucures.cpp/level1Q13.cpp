//13. Find the second-highest salary.
#include<iostream>
#include<vector>
using namespace std;

struct Employee{
    string name;
    int id;
    double salary;
};

int main(){
    int n;
    cout<<"enter no.of employees: ";
    cin>>n;

    if(n < 2){
        cout<<"Need at least 2 employees";
        return 0;
    }

    vector<Employee> emp(n);

    // 1. Input
    for(int i=0; i<n; i++){
        cout<<"\nEnter employee "<<i+1<<endl;
        cout<<"Name: ";
        cin>>ws;
        getline(cin, emp[i].name);
        cout<<"ID: ";
        cin>>emp[i].id;
        cout<<"Salary: ";
        cin>>emp[i].salary;
    }

    // 2. Sort in descending order (Highest first)
    // Simple Bubble Sort - you already know this
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(emp[j].salary < emp[j+1].salary){ // < for descending
                Employee temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }

    // 3. Second element after sorting is the answer
    // emp[0] = Highest, emp[1] = Second Highest
    cout<<"\nSecond Highest Salary = "<<emp[1].salary<<endl;
    cout<<"Employee: "<<emp[1].name<<" (ID: "<<emp[1].id<<")";

    return 0;
}
/*output:
enter no.of employees: 3 

Enter employee 1
Name: jayendra
ID: 1
Salary: 80000

Enter employee 2
Name: vijay
ID: 2
Salary: 70000

Enter employee 3
Name: Toni
ID: 3
Salary: 60000

Second Highest Salary = 70000
Employee: vijay (ID: 2)*/