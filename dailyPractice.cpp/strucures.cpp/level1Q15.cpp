//15. Display only students who passed.
#include <iostream>
using namespace std;

struct Student {
    string name;
    int marks;
};

int main() {
    int n;
    cout << "Enter no.of Students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) {
        cout<<"enter name and marks:";
        cin >> s[i].name >> s[i].marks;
    }

    cout << "Passed students:\n";
    for (int i = 0; i < n; i++) {
        if (s[i].marks >= 40)
            cout << s[i].name << " " << s[i].marks << endl;
    }
    return 0;
}
//output:
/*Enter no.of Students: 3
enter name and marks:jayendra
87
enter name and marks:toni
78
enter name and marks:aditya
39
Passed students:
jayendra 87
toni 78*/