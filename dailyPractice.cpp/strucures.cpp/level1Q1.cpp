#include<iostream>
#include<string> // for string type
using namespace std;

// 1. Structure definition - Blueprint for Student data type
struct Student {
    string name;  // string, not char (char holds only 1 letter)
    int rollNo;   // Roll number
    int marks;    // Marks
}; // semicolon is must after struct

int main(){
    // 2. Create object of struct - allocates memory for all fields
    Student s1;

    // 3. Input using dot (.) operator - access struct members
    cout<<"Enter name: ";
    cin>>s1.name;
    
    cout<<"Enter Rollno: ";
    cin>>s1.rollNo;
    
    cout<<"Enter Marks: ";
    cin>>s1.marks;

    // 4. Output - display struct data
    cout<<"\n--- Student Data ---"<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"RollNo: "<<s1.rollNo<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    
    return 0;
}
//output:
/*PS C:\Users\jayendra kumar\Desktop\CPP\StructuresInCPP\output> & .\'level1Q1.exe'
Enter name: jayendra
Enter Rollno: 123
Enter Marks: 96

--- Student Data ---
Name: jayendra
RollNo: 123
Marks: 96
PS C:\Us*/
