#include <iostream>
using namespace std;

struct Student { // 1. small 's' in struct
    string name;
    int marks;
};

int main() {
    Student arr[3]; // array of 3 structures
    Student *ptr; // pointer to structure

    ptr = arr; // ptr points to first element of array (ptr = &arr[0])

    // Input using pointer
    cout << "Enter 3 students name and marks:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i+1 << ": ";
        cin >> (ptr + i)->name >> (ptr + i)->marks;
    }

    // Output using pointer
    cout << "\nDisplaying using pointer:\n";
    for (int i = 0; i < 3; i++) {
        cout << (ptr + i)->name << " - " << (ptr + i)->marks << endl;
    }

    return 0;
}
//output:
/*Enter 3 students name and marks:
Student 1: jayendra
89
Student 2: toni
98
Student 3: aditya
88

Displaying using pointer:
jayendra - 89
toni - 98
aditya - 88*/