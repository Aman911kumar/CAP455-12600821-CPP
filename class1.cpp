#include <iostream> // # is preprocessor 
using namespace std;

int main(){

    int num1=0, num2=0; //num1 and num2 is name of memory address
    cout << "Hello world!"<<endl; //* cout is object, "<<" is insertion operator
    cout << "Enter first number: ";
    cin >> num1; // ">>" is extraction operator
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Sum of num1 and num2 is: "<<num1 + num2;

    return 0;
}