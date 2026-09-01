#include <iostream>
using namespace std;

int main(){

    int num =0,factorial=1;
    cout << "Enter a number: ";
    cin >> num;

    // int i = 1;
    // while (i<=num)
    // {
    //     factorial *= i;
    //     i++;
    // }

    // for (int i = 1; i <= num; i++)
    // {
    //     factorial *= i;
    // }

    int i = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i<=num);
    
    

    cout << factorial;

    return 0;
}