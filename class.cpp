#include <iostream>
using namespace std;

class Sumof2 {
  public:
    int num1 = 0;
    int num2 = 0;
    int add() {
        return num1 + num2;
    }
};

int main() {

    int result = 0;

    Sumof2 o1;

    cout << "Enter first number:";
    cin >> o1.num1;

    cout << "Enter secont number: ";
    cin >> o1.num2;

    cout << "The sum of" << o1.num1 << " and " << o1.num2 << " is " << ": "
         << o1.add();

    return 0;
}