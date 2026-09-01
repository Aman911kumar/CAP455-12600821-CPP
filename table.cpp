#include <iostream>
using namespace std;

int main() {
    int range1 = 0, range2 = 0, number = 0;
    string Name = "";

    cout << "Enter staring and ending range of table: ";
    cin >> range1 >> range2;

    for (int i = range1; i <= range2; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout << "\n";
    }

    cout << "done ";

    return 0;
}