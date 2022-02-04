#include <iostream>
using namespace std;

int main()
{
    int n;
    int counter;

    cout << "please enter a poositive integer: ";
    cin >> n;

    counter = 1;
    cout << "section a" << endl;
    while (counter <= n) {
        cout << (2 * counter) << endl;
        counter++;
    }


    cout << "section b" << endl;
    for (counter = 1; counter <= n; counter++) {
        cout << (2 * counter) << endl;
    }
    return 0;
}

