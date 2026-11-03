// Railway reservation record System
#include <iostream>
using namespace std;

// Structure to store passenger details
struct Passenger
{
    int pnr;
    char name[50];
    int age;
    int trainNo;
    char trainName[50];
    char source[30];
    char destination[30];
    int seatNo;
};

// Array of structures
Passenger p[100];

int count = 0;
int nextPNR = 1001;
int nextSeat = 1;

// Function to book a ticket
void bookTicket()
{
    if (count >= 100)
    {
        cout << "\nReservation limit reached!";
        return;
    }

    cout << "\nEnter Passenger Name: ";
    cin.ignore();
    cin.getline(p[count].name, 50);

    cout << "Enter Age: ";
    cin >> p[count].age;

    cout << "Enter Train Number: ";
    cin >> p[count].trainNo;

    cin.ignore();

    cout << "Enter Train Name: ";
    cin.getline(p[count].trainName, 50);

    cout << "Enter Source Station: ";
    cin.getline(p[count].source, 30);

    cout << "Enter Destination Station: ";
    cin.getline(p[count].destination, 30);

    // Generate PNR and seat number
    p[count].pnr = nextPNR++;
    p[count].seatNo = nextSeat++;

    cout << "\nTicket Booked Successfully!";
    cout << "\nPNR Number: " << p[count].pnr;
    cout << "\nSeat Number: " << p[count].seatNo;

    count++;
}

// Function to display all passenger records
void displayRecords()
{
    if (count == 0)
    {
        cout << "\nNo Reservation Records Found!";
        return;
    }

    cout << "\n===== ALL PASSENGER RECORDS =====\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nPNR Number: " << p[i].pnr;
        cout << "\nPassenger Name: " << p[i].name;
        cout << "\nAge: " << p[i].age;
        cout << "\nTrain Number: " << p[i].trainNo;
        cout << "\nTrain Name: " << p[i].trainName;
        cout << "\nSource: " << p[i].source;
        cout << "\nDestination: " << p[i].destination;
        cout << "\nSeat Number: " << p[i].seatNo;

        cout << "\n-----------------------------\n";
    }
}

// Function to search passenger using PNR
void searchPassenger()
{
    int searchPNR;
    bool found = false;

    cout << "\nEnter PNR Number to Search: ";
    cin >> searchPNR;

    for (int i = 0; i < count; i++)
    {
        if (p[i].pnr == searchPNR)
        {
            cout << "\nPassenger Record Found!";
            cout << "\nPNR Number: " << p[i].pnr;
            cout << "\nName: " << p[i].name;
            cout << "\nAge: " << p[i].age;
            cout << "\nTrain Number: " << p[i].trainNo;
            cout << "\nTrain Name: " << p[i].trainName;
            cout << "\nSource: " << p[i].source;
            cout << "\nDestination: " << p[i].destination;
            cout << "\nSeat Number: " << p[i].seatNo;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nPassenger Record Not Found!";
    }
}

// Function to cancel ticket
void cancelTicket()
{
    int cancelPNR;
    bool found = false;

    cout << "\nEnter PNR Number to Cancel: ";
    cin >> cancelPNR;

    for (int i = 0; i < count; i++)
    {
        if (p[i].pnr == cancelPNR)
        {
            // Shift remaining records to the left
            for (int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            cout << "\nTicket Cancelled Successfully!";

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nInvalid PNR Number!";
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n===== RAILWAY RESERVATION SYSTEM =====";
        cout << "\n1. Book Ticket";
        cout << "\n2. Display All Records";
        cout << "\n3. Search Passenger";
        cout << "\n4. Cancel Ticket";
        cout << "\n5. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayRecords();
                break;

            case 3:
                searchPassenger();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                cout << "\nThank You for Using Railway Reservation System!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 5);

    return 0;
}
//output:
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level8Q04.exe'


===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 1

Enter Passenger Name: Jayendra Kumar
Enter Age: 21
Enter Train Number: 01
Enter Train Name: rajdhani Express
Enter Source Station: lucknow
Enter Destination Station: Delhi

Ticket Booked Successfully!
PNR Number: 1001
Seat Number: 1

===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 2

===== ALL PASSENGER RECORDS =====

PNR Number: 1001
Passenger Name: Jayendra Kumar
Age: 21
Train Number: 1
Train Name: rajdhani Express
Source: lucknow
Destination: Delhi
Seat Number: 1
-----------------------------


===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 3

Enter PNR Number to Search: 1001

Passenger Record Found!
PNR Number: 1001
Name: Jayendra Kumar
Age: 21
Train Number: 1
Train Name: rajdhani Express
Source: lucknow
Destination: Delhi
Seat Number: 1

===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 4

Enter PNR Number to Cancel: 1001

Ticket Cancelled Successfully!

===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 2

No Reservation Records Found!

===== RAILWAY RESERVATION SYSTEM =====
1. Book Ticket
2. Display All Records
3. Search Passenger
4. Cancel Ticket
5. Exit

Enter Your Choice: 5

Thank You for Using Railway Reservation System!*/