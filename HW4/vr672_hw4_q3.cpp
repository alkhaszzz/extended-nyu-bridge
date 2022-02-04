#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Retrieve User Input
    int n;

    cout << "Enter decimal number: " << endl;
    cin >> n;

    //Find out highest power of 2 that can
    //divide into n without going over
    int highestPower = 0, tmp = 1;

    while (pow(2, highestPower) < n) {
        if (pow(2, highestPower) * 2 > n)
            break;
        tmp *= 2;
        highestPower++;
    }

    cout << "The binary representation of " << n << " is ";

    //Iterate through and subtract values
    //that are powers of 2.  

    //If the subtracted result is less than 0,
    //then the bit's place value is too high. Put '0'.
    //Else '1'
    tmp = n;
    while (highestPower >= 0) {
        int remaining = tmp - pow(2, highestPower);

        if (remaining >= 0) {
            cout << 1;
            tmp = remaining;
        } else {
            cout << 0;
        }

        highestPower--;
    }

    cout << endl;

    return 0;
}