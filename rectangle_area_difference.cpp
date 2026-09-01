#include <iostream>
using namespace std;

int main(){

    int rectangle_area1 = 0,rectangle_area2 = 0,difference =0;
    int lenght = 0, breath = 0;

    cout << "Enter the length and breath of bigger rectangle: ";
    cin >> lenght>>breath;
    rectangle_area1 = lenght * breath;
    
    cout << "Enter the length and breath of smaller rectangle: ";
    cin >> lenght>>breath;
    rectangle_area2 = lenght * breath;

    difference = rectangle_area1 - rectangle_area2;

    cout << "Area of rectangle 1 and 2 is : " << rectangle_area1 << " and "<< rectangle_area2 << endl;
    cout << "The difference of two rectangle is: " << difference;

    return 0;
}