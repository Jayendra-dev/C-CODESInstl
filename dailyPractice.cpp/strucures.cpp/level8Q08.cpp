//8. Contact management system.

#include <iostream>
#include <cstring>
using namespace std;

// Maximum number of contacts
#define MAX 100

// Structure to store contact details
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
    char address[100];
};

// Global contact array
Contact contacts[MAX];
int count = 0;

// Function to add a contact
void addContact()
{
    if (count >= MAX)
    {
        cout << "\nContact list is full!";
        return;
    }

    cout << "\nEnter Name: ";
    cin.ignore();
    cin.getline(contacts[count].name, 50);

    cout << "Enter Phone Number: ";
    cin.getline(contacts[count].phone, 15);

    cout << "Enter Email: ";
    cin.getline(contacts[count].email, 50);

    cout << "Enter Address: ";
    cin.getline(contacts[count].address, 100);

    count++;

    cout << "\nContact Added Successfully!\n";
}

// Function to display all contacts
void displayContacts()
{
    if (count == 0)
    {
        cout << "\nNo contacts available!\n";
        return;
    }

    cout << "\n------ CONTACT LIST ------\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nContact " << i + 1;
        cout << "\nName: " << contacts[i].name;
        cout << "\nPhone: " << contacts[i].phone;
        cout << "\nEmail: " << contacts[i].email;
        cout << "\nAddress: " << contacts[i].address;
        cout << "\n--------------------------\n";
    }
}

// Function to search contact by name
void searchContact()
{
    char searchName[50];
    bool found = false;

    cout << "\nEnter name to search: ";
    cin.ignore();
    cin.getline(searchName, 50);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            cout << "\nContact Found!";
            cout << "\nName: " << contacts[i].name;
            cout << "\nPhone: " << contacts[i].phone;
            cout << "\nEmail: " << contacts[i].email;
            cout << "\nAddress: " << contacts[i].address;

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nContact Not Found!\n";
}

// Function to update a contact
void updateContact()
{
    char searchName[50];
    bool found = false;

    cout << "\nEnter name to update: ";
    cin.ignore();
    cin.getline(searchName, 50);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            cout << "\nEnter New Phone: ";
            cin.getline(contacts[i].phone, 15);

            cout << "Enter New Email: ";
            cin.getline(contacts[i].email, 50);

            cout << "Enter New Address: ";
            cin.getline(contacts[i].address, 100);

            cout << "\nContact Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nContact Not Found!\n";
}

// Function to delete a contact
void deleteContact()
{
    char searchName[50];
    bool found = false;

    cout << "\nEnter name to delete: ";
    cin.ignore();
    cin.getline(searchName, 50);

    for (int i = 0; i < count; i++)
    {
        if (strcmp(contacts[i].name, searchName) == 0)
        {
            // Shift remaining contacts to the left
            for (int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }

            count--;

            cout << "\nContact Deleted Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nContact Not Found!\n";
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display All Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Update Contact";
        cout << "\n5. Delete Contact";
        cout << "\n6. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                cout << "\nExiting Program...";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 6);

    return 0;
}







//output:
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'levelQ08.exe'

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 1

Enter Name: jayendra
Enter Phone Number: 8423252956
Enter Email: jayendrakumar.mca@gmail.com
Enter Address: Pondicherry

Contact Added Successfully!

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 1

Enter Name: toni
Enter Phone Number: 7638078785
Enter Email: otni@gmail.com
Enter Address: Arunachal

Contact Added Successfully!

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 2

------ CONTACT LIST ------

Contact 1
Name: jayendra
Phone: 8423252956
Email: jayendrakumar.mca@gmail.com
Address: Pondicherry
--------------------------

Contact 2
Name: toni
Phone: 7638078785
Email: otni@gmail.com
Address: Arunachal
--------------------------

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 3

Enter name to search: toni

Contact Found!
Name: toni
Phone: 7638078785
Email: otni@gmail.com
Address: Arunachal
===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 4

Enter name to update: toni

Enter New Phone: 7638078785     
Enter New Email: toni@gmail.com
Enter New Address: Arunachal

Contact Updated Successfully!

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 4

Enter name to update: Jayendra

Contact Not Found!

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 5

Enter name to delete: toni

Contact Deleted Successfully!

===== CONTACT MANAGEMENT SYSTEM =====
1. Add Contact
2. Display All Contacts
3. Search Contact
4. Update Contact
5. Delete Contact
6. Exit
Enter Your Choice: 6

Exiting Program...
PS D */