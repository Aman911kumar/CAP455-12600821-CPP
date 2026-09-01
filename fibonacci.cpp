#include <iostream>
using namespace std;

int main(){

    int num = 0, fibonacci = 0;

    cout << "Enter any number: ";
    cin >> num;

    int i = 1;
    while (i<=num)
    {
        fibonacci += i;
        i++;
    }

    cout << "fibonacci: " << fibonacci;

    return 0;
}