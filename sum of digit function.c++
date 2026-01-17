#include <iostream>
using namespace std;

int sumoflastdigit(int num) {
    int digisum = 0;
    while (num > 0) {
        int lastdigit = num % 10; 
        digisum += lastdigit;
        num /= 10;
    }
    return digisum;
}

int main() {
    cout << "digisum = " << sumoflastdigit(12345) << endl;
    return 0;
}
