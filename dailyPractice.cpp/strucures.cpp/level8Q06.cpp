//6. Library management system.



#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Structure to store book information
struct Book
{
    int bookID;
    char title[100];
    char author[100];
    int quantity;
    int available;
};

// Structure to store issue information
struct Issue
{
    int bookID;
    char studentName[100];
};

// Global arrays
Book books[100];
Issue issues[100];

int bookCount = 0;
int issueCount = 0;

// Function to save books into file
void saveBooks()
{
    ofstream file("books.txt");

    for (int i = 0; i < bookCount; i++)
    {
        file << books[i].bookID << endl;
        file << books[i].title << endl;
        file << books[i].author << endl;
        file << books[i].quantity << endl;
        file << books[i].available << endl;
    }

    file.close();
}

// Function to load books from file
void loadBooks()
{
    ifstream file("books.txt");

    bookCount = 0;

    while (bookCount < 100 &&
           file >> books[bookCount].bookID)
    {
        file.ignore();

        file.getline(books[bookCount].title, 100);
        file.getline(books[bookCount].author, 100);

        file >> books[bookCount].quantity;
        file >> books[bookCount].available;

        bookCount++;
    }

    file.close();
}

// Function to add a new book
void addBook()
{
    if (bookCount >= 100)
    {
        cout << "Library storage is full!\n";
        return;
    }

    cout << "\nEnter Book ID: ";
    cin >> books[bookCount].bookID;

    cin.ignore();

    cout << "Enter Book Title: ";
    cin.getline(books[bookCount].title, 100);

    cout << "Enter Author Name: ";
    cin.getline(books[bookCount].author, 100);

    cout << "Enter Quantity: ";
    cin >> books[bookCount].quantity;

    if (books[bookCount].quantity <= 0)
    {
        cout << "Quantity must be positive!\n";
        return;
    }

    books[bookCount].available =
        books[bookCount].quantity;

    bookCount++;

    saveBooks();

    cout << "\nBook Added Successfully!\n";
}

// Function to display all books
void displayBooks()
{
    if (bookCount == 0)
    {
        cout << "\nNo books available!\n";
        return;
    }

    cout << "\n========== BOOK RECORDS ==========\n";

    for (int i = 0; i < bookCount; i++)
    {
        cout << "\nBook ID: " << books[i].bookID;
        cout << "\nTitle: " << books[i].title;
        cout << "\nAuthor: " << books[i].author;
        cout << "\nTotal Quantity: " << books[i].quantity;
        cout << "\nAvailable: " << books[i].available;
        cout << "\n---------------------------------\n";
    }
}

// Function to search book by ID
void searchBook()
{
    int id;
    bool found = false;

    cout << "\nEnter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].bookID == id)
        {
            cout << "\nBook Found!\n";
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Available Copies: "
                 << books[i].available << endl;

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nBook Not Found!\n";
}

// Function to issue a book
void issueBook()
{
    int id;
    int index = -1;

    cout << "\nEnter Book ID: ";
    cin >> id;

    // Find the book
    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].bookID == id)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "\nBook Not Found!\n";
        return;
    }

    if (books[index].available <= 0)
    {
        cout << "\nBook is not available!\n";
        return;
    }

    if (issueCount >= 100)
    {
        cout << "\nIssue record storage is full!\n";
        return;
    }

    cin.ignore();

    cout << "Enter Student Name: ";
    cin.getline(issues[issueCount].studentName, 100);

    issues[issueCount].bookID = id;

    issueCount++;

    books[index].available--;

    saveBooks();

    cout << "\nBook Issued Successfully!\n";
}

// Function to return a book
void returnBook()
{
    int id;
    char name[100];
    bool found = false;

    cout << "\nEnter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Student Name: ";
    cin.getline(name, 100);

    for (int i = 0; i < issueCount; i++)
    {
        if (issues[i].bookID == id &&
            strcmp(issues[i].studentName, name) == 0)
        {
            found = true;

            // Find the original book
            for (int j = 0; j < bookCount; j++)
            {
                if (books[j].bookID == id)
                {
                    books[j].available++;
                    break;
                }
            }

            // Remove returned issue record
            for (int j = i; j < issueCount - 1; j++)
            {
                issues[j] = issues[j + 1];
            }

            issueCount--;

            saveBooks();

            cout << "\nBook Returned Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "\nIssue Record Not Found!\n";
}

// Function to display available books
void availableBooks()
{
    cout << "\n======= AVAILABLE BOOKS =======\n";

    bool found = false;

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].available > 0)
        {
            cout << "\nID: " << books[i].bookID;
            cout << "\nTitle: " << books[i].title;
            cout << "\nAvailable Copies: "
                 << books[i].available << endl;

            found = true;
        }
    }

    if (!found)
        cout << "\nNo books currently available!\n";
}

// Function to delete a book
void deleteBook()
{
    int id;
    int index = -1;

    cout << "\nEnter Book ID to delete: ";
    cin >> id;

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].bookID == id)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "\nBook Not Found!\n";
        return;
    }

    if (books[index].available != books[index].quantity)
    {
        cout << "\nCannot delete: Some copies are issued!\n";
        return;
    }

    for (int i = index; i < bookCount - 1; i++)
    {
        books[i] = books[i + 1];
    }

    bookCount--;

    saveBooks();

    cout << "\nBook Deleted Successfully!\n";
}

// Main function
int main()
{
    loadBooks();

    int choice;

    do
    {
        cout << "\n\n================================";
        cout << "\n     LIBRARY MANAGEMENT SYSTEM";
        cout << "\n================================";

        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Available Books";
        cout << "\n7. Delete Book";
        cout << "\n8. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                availableBooks();
                break;

            case 7:
                deleteBook();
                break;

            case 8:
                cout << "\nThank You for Using Library System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 8);

    return 0;
}
/*
OUTPUT:
================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 1

Enter Book ID: 01
Enter Book Title: ignited minds
Enter Author Name: A.P.J Abdul Kalam
Enter Quantity: 100

Book Added Successfully!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 1

Enter Book ID: 02  
Enter Book Title: how to win friends and influence peoples
Enter Author Name: dale Carnegi   
Enter Quantity: 100 

Book Added Successfully!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 2

========== BOOK RECORDS ==========

Book ID: 1
Title: ignited minds
Author: A.P.J Abdul Kalam
Total Quantity: 100
Available: 100
---------------------------------

Book ID: 2
Title: how to win friends and influence peoples
Author: dale Carnegi
Total Quantity: 100
Available: 100
---------------------------------


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 3

Enter Book ID to search: 02

Book Found!
Title: how to win friends and influence peoples
Author: dale Carnegi
Available Copies: 100


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 4

Enter Book ID: 01
Enter Student Name: Jayendra kumar

Book Issued Successfully!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 5

Enter Book ID: 01
Enter Student Name: Jayendra Kumar

Issue Record Not Found!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 5

Enter Book ID: 01
Enter Student Name: Jayendra Kumar

Issue Record Not Found!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 5

Enter Book ID: 02
Enter Student Name: Jayendra Kumar

Issue Record Not Found!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 6

======= AVAILABLE BOOKS =======

ID: 1
Title: ignited minds
Available Copies: 99

ID: 2
Title: how to win friends and influence peoples
Available Copies: 100


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice:  7

Enter Book ID to delete: 02

Book Deleted Successfully!


================================
     LIBRARY MANAGEMENT SYSTEM
================================
1. Add Book
2. Display All Books
3. Search Book
4. Issue Book
5. Return Book
6. Available Books
7. Delete Book
8. Exit

Enter Your Choice: 8

Thank You for Using Library System!
PS D:\cpp\CPP\StructuresInCPP\output> */