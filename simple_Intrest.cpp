// SI = (P × R × T) / 100, (simple intrest formula)
#include <iostream>
using namespace std;

int main(){

    int si = 0, p = 0, r = 0, t = 0;

    cout << "Enter principal in rs: ";
    cin >> p;
    cout << "Enter rate in %: ";
    cin >> r;
    cout << "Enter time  in year: ";
    cin >> t;

    si = (p * r * t) / 100;

    cout << "Your Simple intrest is: " << si << endl;
    cout << "Total amount is: " << si + p;

    return 0;
}