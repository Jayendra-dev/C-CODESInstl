//2. Implement stack using linked nodes.

#include <iostream>
using namespace std;

// Structure representing a stack node
struct Node
{
    int data;       // Stores the value
    Node* next;     // Points to the next node

    // Constructor initializes the node
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Stack class implemented using linked nodes
class Stack
{
private:
    Node* top;      // Points to the top node

public:
    // Constructor initializes an empty stack
    Stack()
    {
        top = nullptr;
    }

    // Insert an element into the stack
    void push(int value)
    {
        Node* newNode = new Node(value);

        // Link the new node to the previous top
        newNode->next = top;

        // Update top to the new node
        top = newNode;

        cout << value << " pushed into stack." << endl;
    }

    // Remove the top element
    void pop()
    {
        // Check whether the stack is empty
        if (top == nullptr)
        {
            cout << "Stack Underflow! Stack is empty." << endl;
            return;
        }

        // Store the current top node temporarily
        Node* temp = top;

        // Move top to the next node
        cout << temp->data << " popped from stack." << endl;
        top = top->next;

        // Release memory of the removed node
        delete temp;
    }

    // Display the top element without removing it
    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Top element: " << top->data << endl;
    }

    // Display all elements from top to bottom
    void display()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* temp = top;

        cout << "Stack (Top to Bottom): ";

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Destructor releases all remaining nodes
    ~Stack()
    {
        while (top != nullptr)
        {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Program terminated." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
/*PS D:\cpp\CPP\StructuresInCPP\output> & .\'level7Q2.exe'

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 11
11 pushed into stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 12
12 pushed into stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 13
13 pushed into stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 14
14 pushed into stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 1
Enter value to push: 15
15 pushed into stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 4
Stack (Top to Bottom): 15 14 13 12 11 

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 2
15 popped from stack.

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 3
Top element: 14

--- STACK MENU ---
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice: 5
Program terminated.*/