#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isprime = true;

    if (n <= 1) {
        isprime = false;
    }

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isprime = false;
            break;
        }
    }

    if (isprime)
        cout << "Prime number";
    else
        cout << "Non-prime number";

    return 0;
}
