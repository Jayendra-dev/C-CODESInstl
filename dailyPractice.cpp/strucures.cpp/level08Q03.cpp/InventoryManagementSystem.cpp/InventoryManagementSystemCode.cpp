// 3. Inventory management system.

#include <iostream>
using namespace std;

#define MAX 100

// Structure to store product details
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

// Array of structures
Product p[MAX];

// Stores the current number of products
int count = 0;


// Function to insert a product
void insertProduct()
{
    if (count == MAX)
    {
        cout << "Inventory is full!\n";
        return;
    }

    cout << "\nEnter Product ID: ";
    cin >> p[count].id;

    // Check for duplicate ID
    for (int i = 0; i < count; i++)
    {
        if (p[i].id == p[count].id)
        {
            cout << "Product ID already exists!\n";
            return;
        }
    }

    cout << "Enter Product Name: ";
    cin >> p[count].name;

    cout << "Enter Quantity: ";
    cin >> p[count].quantity;

    cout << "Enter Price: ";
    cin >> p[count].price;

    count++;

    cout << "\nProduct inserted successfully!\n";
}


// Function to display all products
void displayProducts()
{
    if (count == 0)
    {
        cout << "\nNo products available!\n";
        return;
    }

    cout << "\n------ INVENTORY DETAILS ------\n";

    for (int i = 0; i < count; i++)
    {
        cout << "\nProduct ID: " << p[i].id;
        cout << "\nProduct Name: " << p[i].name;
        cout << "\nQuantity: " << p[i].quantity;
        cout << "\nPrice: Rs. " << p[i].price;
        cout << "\nTotal Value: Rs. "
             << p[i].quantity * p[i].price << "\n";
    }
}


// Function to search for a product
void searchProduct()
{
    int id, found = 0;

    cout << "\nEnter Product ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {
            cout << "\nProduct Found!";
            cout << "\nID: " << p[i].id;
            cout << "\nName: " << p[i].name;
            cout << "\nQuantity: " << p[i].quantity;
            cout << "\nPrice: Rs. " << p[i].price << "\n";

            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "\nProduct not found!\n";
}


// Function to update product details
void updateProduct()
{
    int id, found = 0;

    cout << "\nEnter Product ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {
            cout << "Enter New Name: ";
            cin >> p[i].name;

            cout << "Enter New Quantity: ";
            cin >> p[i].quantity;

            cout << "Enter New Price: ";
            cin >> p[i].price;

            cout << "\nProduct updated successfully!\n";

            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "\nProduct not found!\n";
}


// Function to delete a product
void deleteProduct()
{
    int id, found = 0;

    cout << "\nEnter Product ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (p[i].id == id)
        {
            // Shift remaining products to the left
            for (int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            cout << "\nProduct deleted successfully!\n";

            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "\nProduct not found!\n";
}


// Function to sort products by price
void sortProducts()
{
    Product temp;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (p[j].price > p[j + 1].price)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    cout << "\nProducts sorted by price successfully!\n";
    displayProducts();
}


// Function to calculate total inventory value
void totalInventoryValue()
{
    float total = 0;

    for (int i = 0; i < count; i++)
    {
        total += p[i].quantity * p[i].price;
    }

    cout << "\nTotal Inventory Value = Rs. "
         << total << "\n";
}


// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n\n===== INVENTORY MANAGEMENT SYSTEM =====";
        cout << "\n1. Insert Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Product";
        cout << "\n5. Delete Product";
        cout << "\n6. Sort Products by Price";
        cout << "\n7. Total Inventory Value";
        cout << "\n8. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateProduct();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                sortProducts();
                break;

            case 7:
                totalInventoryValue();
                break;

            case 8:
                cout << "\nExiting Inventory System...\n";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 8);

    return 0;
}
/*OUTPUT:

===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 1

Enter Product ID: 01
Enter Product Name: Soap
Enter Quantity: 10
Enter Price: 70

Product inserted successfully!


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 1       

Enter Product ID: 02
Enter Product Name: Handwash
Enter Quantity: 8 
Enter Price: 150

Product inserted successfully!


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 2

------ INVENTORY DETAILS ------

Product ID: 1
Product Name: Soap
Quantity: 10
Price: Rs. 70
Total Value: Rs. 700

Product ID: 2
Product Name: Handwash
Quantity: 8
Price: Rs. 150
Total Value: Rs. 1200


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 3

Enter Product ID to search: 02

Product Found!
ID: 2
Name: Handwash
Quantity: 8
Price: Rs. 150


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 4

Enter Product ID to update: 01
Enter New Name: Shampoo
Enter New Quantity: 80
Enter New Price: 50

Product updated successfully!


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 5

Enter Product ID to delete: 02

Product deleted successfully!


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 6

Products sorted by price successfully!

------ INVENTORY DETAILS ------

Product ID: 1
Product Name: Shampoo
Quantity: 80
Price: Rs. 50
Total Value: Rs. 4000


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 7

Total Inventory Value = Rs. 4000


===== INVENTORY MANAGEMENT SYSTEM =====
1. Insert Product
2. Display Products
3. Search Product
4. Update Product
5. Delete Product
6. Sort Products by Price
7. Total Inventory Value
8. Exit

Enter your choice: 8

Exiting Inventory System...
PS D:\cpp\CPP\StructuresInCPP\output> */
