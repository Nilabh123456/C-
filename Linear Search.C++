#include<iostream>
using namespace std;

int main() {
    int n, target, found = 0;

    cout << "Enter the size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the target: ";
    cin >> target;

    for (int j = 0; j < n; j++) {
        if (arr[j] == target) {
            cout << "Element found at index = " << j << endl;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Element not found" << endl;
    }

    return 0;
}
