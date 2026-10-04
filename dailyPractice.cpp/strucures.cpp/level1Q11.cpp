//11. Sort students according to roll number.
#include<iostream>
using namespace std;

// Step 1: Define a structure to hold all details of one student together
struct Student{
    string name;
    string subject;
    int rollNo;
    int marks;
};

int main(){
    int n;
    cout<<"enter no.of students:";
    cin>>n;

    // Step 2: Use vector instead of array because size 'n' is dynamic
    // vector<Student> s(n) means array of 'n' Student objects
    Student* s = new Student[n]; // manual dynamic memory

    // Step 3: Input loop - Take details of each student
    for(int i=0;i<n;i++){
        cout<< "enter details for student "<<i+1<<endl;

        cout<<"enter name:";
        cin>>ws; // 'ws' removes the newline left by previous cin, else getline will skip
        getline(cin, s[i].name);

        cout<<"enter subject:";
        cin>>ws;
        getline(cin, s[i].subject);

        cout<<"enter rollNo:";
        cin>>s[i].rollNo; // Fixed: removed extra dot (.)

        cout<<"enter marks:";
        cin>>s[i].marks;
    }

    // Step 4: SORTING - Sort students according to roll number
    // We use Bubble Sort concept here for simplicity:
    // Compare rollNo of adjacent students and swap if they are out of order
    for(int i=0; i<n-1; i++){ // Outer loop for number of passes
        for(int j=0; j<n-i-1; j++){ // Inner loop for comparing pairs
            // If current roll number is greater than next, swap them
            if(s[j].rollNo > s[j+1].rollNo){
                Student temp = s[j]; // Swap entire Student record
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    // Step 5: Output loop - Display sorted list
    cout<<"\n--- Students Sorted by Roll Number ---\n";
    for(int i=0;i<n;i++){
        cout<<"Roll No: "<<s[i].rollNo<<", ";
        cout<<"Name: "<<s[i].name<<", ";
        cout<<"Subject: "<<s[i].subject<<", ";
        cout<<"Marks: "<<s[i].marks<<endl;
    }

    return 0;
}

/*
PS D:\cpp\CPP\StructuresInCPP\output> & .\'level1Q11.exe'
enter no.of students:2
enter details for student 1
enter name:jayendra Kumar
enter subject:oop
enter rollNo:923
enter marks:32
enter details for student 2
enter name:Toni
enter subject:oops
enter rollNo:424
enter marks:23

--- Students Sorted by Roll Number ---
Roll No: 424, Name: Toni, Subject: oops, Marks: 23
Roll No: 923, Name: jayendr Kumar, Subject: oop, Marks: 32*/