//College Student Record Management System 

#include <iostream>
using namespace std;

// Structure to store student information
struct Student
{
    int rollNo;
    char name[50];
    float marks;

    Student *next;
};

// Initially, linked list is empty
Student *head = NULL;

// Function 1: Add a new student
void addStudent()
{
    Student *newNode = new Student;

    cout << "\nEnter Roll Number: ";
    cin >> newNode->rollNo;

    // Check for duplicate roll number
    Student *temp = head;

    while (temp != NULL)
    {
        if (temp->rollNo == newNode->rollNo)
        {
            cout << "Roll number already exists!\n";
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter Student Name: ";
    cin.ignore();
    cin.getline(newNode->name, 50);

    cout << "Enter Marks: ";
    cin >> newNode->marks;

    newNode->next = NULL;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        // Insert at the end
        Student *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "\nStudent added successfully!\n";
}

// Function 2: Display all students
void displayStudents()
{
    if (head == NULL)
    {
        cout << "\nNo student records found!\n";
        return;
    }

    Student *temp = head;

    cout << "\n========== STUDENT RECORDS ==========\n";

    while (temp != NULL)
    {
        cout << "\nRoll Number : " << temp->rollNo;
        cout << "\nName        : " << temp->name;
        cout << "\nMarks       : " << temp->marks;
        cout << "\n------------------------------------";

        temp = temp->next;
    }
}

// Function 3: Search student
void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    Student *temp = head;

    while (temp != NULL)
    {
        if (temp->rollNo == roll)
        {
            cout << "\nStudent Found!";
            cout << "\nRoll Number: " << temp->rollNo;
            cout << "\nName: " << temp->name;
            cout << "\nMarks: " << temp->marks << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "\nStudent not found!\n";
}

// Function 4: Update student record
void updateStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Update: ";
    cin >> roll;

    Student *temp = head;

    while (temp != NULL)
    {
        if (temp->rollNo == roll)
        {
            cout << "Enter New Name: ";
            cin.ignore();
            cin.getline(temp->name, 50);

            cout << "Enter New Marks: ";
            cin >> temp->marks;

            cout << "\nRecord Updated Successfully!\n";
            return;
        }

        temp = temp->next;
    }

    cout << "\nStudent not found!\n";
}

// Function 5: Delete student record
void deleteStudent()
{
    int roll;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    Student *temp = head;
    Student *prev = NULL;

    while (temp != NULL)
    {
        if (temp->rollNo == roll)
        {
            // Deleting first node
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }

            delete temp;

            cout << "\nStudent Deleted Successfully!\n";
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    cout << "\nStudent not found!\n";
}

// Function 6: Count total students
void countStudents()
{
    int count = 0;

    Student *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "\nTotal Students: " << count << endl;
}

// Function 7: Sort students by marks (descending)
void sortStudents()
{
    if (head == NULL || head->next == NULL)
    {
        cout << "\nNot enough records to sort!\n";
        return;
    }

    Student *i, *j;

    for (i = head; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->marks < j->marks)
            {
                // Swap student data
                int tempRoll = i->rollNo;
                i->rollNo = j->rollNo;
                j->rollNo = tempRoll;

                float tempMarks = i->marks;
                i->marks = j->marks;
                j->marks = tempMarks;

                char tempName[50];

                int k = 0;
                while (i->name[k] != '\0')
                {
                    tempName[k] = i->name[k];
                    k++;
                }
                tempName[k] = '\0';

                k = 0;
                while (j->name[k] != '\0')
                {
                    i->name[k] = j->name[k];
                    k++;
                }
                i->name[k] = '\0';

                k = 0;
                while (tempName[k] != '\0')
                {
                    j->name[k] = tempName[k];
                    k++;
                }
                j->name[k] = '\0';
            }
        }
    }

    cout << "\nStudents Sorted by Marks Successfully!\n";
}

// Function 8: Find highest marks
void findTopper()
{
    if (head == NULL)
    {
        cout << "\nNo student records available!\n";
        return;
    }

    Student *temp = head;
    Student *topper = head;

    while (temp != NULL)
    {
        if (temp->marks > topper->marks)
        {
            topper = temp;
        }

        temp = temp->next;
    }

    cout << "\n========== TOPPER DETAILS ==========\n";
    cout << "Roll Number: " << topper->rollNo;
    cout << "\nName: " << topper->name;
    cout << "\nMarks: " << topper->marks << endl;
}

// Function 9: Free allocated memory
void freeMemory()
{
    Student *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n====================================";
        cout << "\n COLLEGE STUDENT RECORD MANAGEMENT";
        cout << "\n====================================";

        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Count Students";
        cout << "\n7. Sort Students by Marks";
        cout << "\n8. Find Topper";
        cout << "\n9. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addStudent();
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
                countStudents();
                break;

            case 7:
                sortStudents();
                break;

            case 8:
                findTopper();
                break;

            case 9:
                freeMemory();
                cout << "\nThank You! Program Exited.\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 9);

    return 0;
}
/*
output:
====================================
 COLLEGE STUDENT RECORD MANAGEMENT
====================================
1. Add Student
2. Display Students
3. Search Student
4. Update Student
5. Delete Student
6. Count Students
7. Sort Students by Marks
8. Find Topper
9. Exit

Enter Your Choice: */