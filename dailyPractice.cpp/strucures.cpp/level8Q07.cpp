//7. Bank account management system.

#include <iostream>
#include <fstream>
using namespace std;

// Structure to store bank account details
struct BankAccount
{
    int accountNumber;
    string name;
    float balance;
};

// Maximum number of accounts
const int MAX = 100;

BankAccount accounts[MAX];
int count = 0;

// Function to create a new account
void createAccount()
{
    if (count >= MAX)
    {
        cout << "\nBank account storage is full!";
        return;
    }

    cout << "\nEnter Account Number: ";
    cin >> accounts[count].accountNumber;

    // Check duplicate account number
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].accountNumber ==
            accounts[count].accountNumber)
        {
            cout << "\nAccount already exists!";
            return;
        }
    }

    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, accounts[count].name);

    cout << "Enter Initial Balance: ";
    cin >> accounts[count].balance;

    if (accounts[count].balance < 0)
    {
        cout << "Invalid initial balance!";
        return;
    }

    count++;

    cout << "\nAccount created successfully!";
}

// Function to display all accounts
void displayAccounts()
{
    if (count == 0)
    {
        cout << "\nNo accounts available!";
        return;
    }

    cout << "\n----- ALL BANK ACCOUNTS -----\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nAccount Number: "
             << accounts[i].accountNumber;

        cout << "\nCustomer Name: "
             << accounts[i].name;

        cout << "\nBalance: Rs. "
             << accounts[i].balance;

        cout << "\n-------------------------";
    }
}

// Function to search an account
int searchAccount(int accNo)
{
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].accountNumber == accNo)
        {
            return i;
        }
    }

    return -1;
}

// Function to deposit money
void depositMoney()
{
    int accNo;
    float amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if (index == -1)
    {
        cout << "\nAccount not found!";
        return;
    }

    cout << "Enter Deposit Amount: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid deposit amount!";
        return;
    }

    accounts[index].balance += amount;

    cout << "\nMoney deposited successfully!";
    cout << "\nUpdated Balance: Rs. "
         << accounts[index].balance;
}

// Function to withdraw money
void withdrawMoney()
{
    int accNo;
    float amount;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if (index == -1)
    {
        cout << "\nAccount not found!";
        return;
    }

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid withdrawal amount!";
    }
    else if (amount > accounts[index].balance)
    {
        cout << "\nInsufficient Balance!";
    }
    else
    {
        accounts[index].balance -= amount;

        cout << "\nWithdrawal successful!";
        cout << "\nRemaining Balance: Rs. "
             << accounts[index].balance;
    }
}

// Function to check account balance
void checkBalance()
{
    int accNo;

    cout << "\nEnter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if (index == -1)
    {
        cout << "\nAccount not found!";
    }
    else
    {
        cout << "\nAccount Holder: "
             << accounts[index].name;

        cout << "\nAvailable Balance: Rs. "
             << accounts[index].balance;
    }
}

// Function to save records in a file
void saveAccounts()
{
    ofstream file("bank_accounts.txt");

    for (int i = 0; i < count; i++)
    {
        file << accounts[i].accountNumber << "\n";
        file << accounts[i].name << "\n";
        file << accounts[i].balance << "\n";
    }

    file.close();
    cout << "\nAccount records saved successfully!";
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n===== BANK MANAGEMENT SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Display All Accounts";
        cout << "\n3. Search Account";
        cout << "\n4. Deposit Money";
        cout << "\n5. Withdraw Money";
        cout << "\n6. Check Balance";
        cout << "\n7. Save Accounts";
        cout << "\n8. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
            {
                int accNo;
                cout << "Enter Account Number: ";
                cin >> accNo;

                int index = searchAccount(accNo);

                if (index == -1)
                    cout << "Account not found!";
                else
                    cout << "Account Holder: "
                         << accounts[index].name;
                break;
            }

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                checkBalance();
                break;

            case 7:
                saveAccounts();
                break;

            case 8:
                saveAccounts();
                cout << "\nThank you for using our system!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 8);

    return 0;
}

/*output:
===== BANK MANAGEMENT SYSTEM =====
1. Create Account
2. Display All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Check Balance
7. Save Accounts
8. Exit

Enter Your Choice: 
Invalid Choice!*/