//5. Find the student with the lowest marks
#include<iostream>
using namespace std;

struct Student{
    string name, subject;
    int Rollno;
    double Marks;
};

int main(){
    int n;
    cout<<"enter number of Students: ";
    cin>>n;
    cin.ignore(); // to clear enter key

    Student s[100];

    for(int i=0; i<n; i++){
        cout<<"\nenter details of student " << i+1 << endl; // i+1 for correct number
        cout<<"enter name: ";
        getline(cin, s[i].name);
        cout<<"enter Subject: ";
        getline(cin, s[i].subject);
        cout<<"enter RollNo: ";
        cin>>s[i].Rollno;
        cout<<"enter Marks: ";
        cin>>s[i].Marks;
        cin.ignore(); // clear buffer for next name
    }

    // Assume first student has lowest marks
    int lowestIndex = 0;

    // Start loop from 1 and go till n
    for(int i=1; i<n; i++){
        if(s[i].Marks < s[lowestIndex].Marks){
            lowestIndex = i; // update index, not 0
        }
    }

    cout<<"\nstudent with Lowest marks:"<<endl;
    cout<<"name: "<<s[lowestIndex].name<<endl;
    cout<<"subject: "<<s[lowestIndex].subject<<endl;
    cout<<"Rollno: "<<s[lowestIndex].Rollno<<endl;
    cout<<"Marks: "<<s[lowestIndex].Marks<<endl;

    return 0;
}
/*enter number of Students: 2

enter details of student 1
enter name: jayendra
enter Subject: oop
enter RollNo: 34
enter Marks: 19

enter details of student 2
enter name: toni
enter Subject: oop
enter RollNo: 64
enter Marks: 26

student with Lowest marks:
name: jayendra
subject: oop
Rollno: 34
Marks: 19*/