//2. DSA FOCUS: Student database supporting insertion, deletion, search, update, sorting, highest marks and average.

#include <iostream>
using namespace std;

#define MAX 100

// Structure to store student details
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

// Array of structures
Student students[MAX];

int count = 0;


// 1. INSERT STUDENT
void insertStudent()
{
    if (count == MAX)
    {
        cout << "\nDatabase is full!";
        return;
    }

    int roll;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    // Check whether roll number already exists
    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nRoll Number already exists!";
            return;
        }
    }

    students[count].rollNo = roll;

    cout << "Enter Student Name: ";
    cin >> ws;
    cin.getline(students[count].name, 50);

    cout << "Enter Marks: ";
    cin >> students[count].marks;

    count++;

    cout << "\nStudent inserted successfully!";
}


// 2. DISPLAY STUDENTS
void displayStudents()
{
    if (count == 0)
    {
        cout << "\nNo student records available!";
        return;
    }

    cout << "\n------ STUDENT RECORDS ------\n";

    cout << "Roll No.\tName\t\tMarks\n";

    for (int i = 0; i < count; i++)
    {
        cout << students[i].rollNo << "\t\t";
        cout << students[i].name << "\t\t";
        cout << students[i].marks << endl;
    }
}


// 3. SEARCH STUDENT
void searchStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nStudent Found!";
            cout << "\nRoll Number: " << students[i].rollNo;
            cout << "\nName: " << students[i].name;
            cout << "\nMarks: " << students[i].marks;
            return;
        }
    }

    cout << "\nStudent not found!";
}


// 4. UPDATE STUDENT
void updateStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == roll)
        {
            cout << "\nEnter New Name: ";
            cin >> ws;
            cin.getline(students[i].name, 50);

            cout << "Enter New Marks: ";
            cin >> students[i].marks;

            cout << "\nStudent updated successfully!";
            return;
        }
    }

    cout << "\nStudent not found!";
}


// 5. DELETE STUDENT
void deleteStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < count; i++)
    {
        if (students[i].rollNo == roll)
        {
            // Shift remaining records to the left
            for (int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            count--;

            cout << "\nStudent deleted successfully!";
            return;
        }
    }

    cout << "\nStudent not found!";
}


// 6. SORT STUDENTS BY MARKS
void sortStudents()
{
    Student temp;

    // Bubble sort in descending order
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                temp = students[j];

                students[j] = students[j + 1];

                students[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents sorted successfully!";

    displayStudents();
}


// 7. FIND HIGHEST MARKS
void highestMarks()
{
    if (count == 0)
    {
        cout << "\nNo student records available!";
        return;
    }

    int highest = 0;

    for (int i = 1; i < count; i++)
    {
        if (students[i].marks > students[highest].marks)
        {
            highest = i;
        }
    }

    cout << "\nStudent with Highest Marks:";

    cout << "\nRoll Number: " << students[highest].rollNo;
    cout << "\nName: " << students[highest].name;
    cout << "\nMarks: " << students[highest].marks;
}


// 8. CALCULATE AVERAGE MARKS
void averageMarks()
{
    if (count == 0)
    {
        cout << "\nNo student records available!";
        return;
    }

    float total = 0;

    for (int i = 0; i < count; i++)
    {
        total = total + students[i].marks;
    }

    float average = total / count;

    cout << "\nTotal Marks: " << total;
    cout << "\nAverage Marks: " << average;
}


// MAIN FUNCTION
int main()
{
    int choice;

    do
    {
        cout << "\n\n===== STUDENT DATABASE SYSTEM =====";

        cout << "\n1. Insert Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Sort Students";
        cout << "\n7. Highest Marks";
        cout << "\n8. Average Marks";
        cout << "\n9. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sortStudents();
                break;

            case 7:
                highestMarks();
                break;

            case 8:
                averageMarks();
                break;

            case 9:
                cout << "\nExiting Program...";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 9);

    return 0;
}
/*output:
===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 1

Enter Roll Number: 1
Enter Student Name: jayendra
Enter Marks: 90

Student inserted successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 1

Enter Roll Number: 2
Enter Student Name: toni
Enter Marks: 98

Student inserted successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 1

Enter Roll Number: 3
Enter Student Name: aditya
Enter Marks: 100

Student inserted successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 1

Enter Roll Number: 4
Enter Student Name: vijay
Enter Marks: 100

Student inserted successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 2

------ STUDENT RECORDS ------
Roll No.        Name            Marks
1               jayendra                90
2               toni            98
3               aditya          100
4               vijay           100


===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 3

Enter Roll Number to Search: 1

Student Found!
Roll Number: 1
Name: jayendra
Marks: 90

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 4

Enter Roll Number to Update: 2

Enter New Name: Toni Riram
Enter New Marks: 100

Student updated successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 5

Enter Roll Number to Delete: 4

Student deleted successfully!

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 6

Students sorted successfully!
------ STUDENT RECORDS ------
Roll No.        Name            Marks
2               Toni Riram              100
3               aditya          100
1               jayendra                90


===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 7

Student with Highest Marks:
Roll Number: 2
Name: Toni Riram
Marks: 100

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 8

Total Marks: 290
Average Marks: 96.6667

===== STUDENT DATABASE SYSTEM =====
1. Insert Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort Students
7. Highest Marks
8. Average Marks
9. Exit

Enter Your Choice: 9

Exiting Program...


























*/