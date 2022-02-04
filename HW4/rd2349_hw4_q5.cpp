#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;


    for (int i = num; i > 0; i--){
        for (int j = num; i < j; j--){
            cout << " ";
        }
        for (int j = 0; i > j; j++) {
            cout << "*";
        }
        for (int j = 1; i > j; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - (i+1)); j++){
            cout << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

}