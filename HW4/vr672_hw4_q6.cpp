#include <iostream>
using namespace std;

int main() {
    int upperLimit;

    cout << "This program takes a positive integer n, and prints";
    cout << " all the numbers from 1 to n, that have more even";
    cout << " digits than odd digits" << endl;

    cout << endl;
    
    cout << "Please enter an integer n: ";
    cin >> upperLimit;

    for (int i = 1; i < upperLimit; i++) {

        int tmp = i; 

        int totalDigits = 0;
        int evenDigits = 0;
        while (tmp > 0) {
            if (tmp % 2 == 0)
                evenDigits += 1;
            totalDigits += 1;
            tmp /= 10;
        }

        if (evenDigits > (float)totalDigits / 2.0)
            cout << i << endl;

    }

    return 0;
}