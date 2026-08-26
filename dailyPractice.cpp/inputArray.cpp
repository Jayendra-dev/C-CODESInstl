#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter no.of array elements you want:";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}