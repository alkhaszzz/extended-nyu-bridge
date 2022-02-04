#include <iostream>

using namespace std;

int main(){

    double input;
    int n, i, v, x, l, c, d, m;

    cout << "Enter decimal number:" << endl;
    cin >> input;

    n = (int) input;

    string r;

    m = n/1000;
    d = (n%1000)/500;
    c = ((n%1000)%500)/100;
    l = (((n%1000)%500)%100)/50;
    x = ((((n%1000)%500)%100)%50)/10;
    v = (((((n%1000)%500)%100)%50)%10)/5;
    i = ((((((n%1000)%500)%100)%50)%10)%5)/1;


    if (d <= 1 && l <= 1 && v <= 1 && c<=4 && x<=4 && i<=4){
        for (int y = 0; y<m; y++){
            r = r + "M";
        }
        for (int y = 0; y<d; y++){
            r = r + "D";
        }
        for (int y = 0; y<c; y++){
            r = r + "C";
        }
        for (int y = 0; y<l; y++){
            r = r + "L";
        }
        for (int y = 0; y<x; y++){
            r = r + "X";
        }
        for (int y = 0; y<v; y++){
            r = r + "V";
        }
        for (int y = 0; y<i; y++){
            r = r + "I";
        }
        cout << n << " is " << r << endl;
    }

}