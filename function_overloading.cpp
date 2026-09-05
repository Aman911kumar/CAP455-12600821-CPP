#include <iostream>
using namespace std;



int main(){
    float area(float ,int);
    int area(int ,int);

    float pi = 3.14;
    int l,b,r;

    cout<<"Enter the value of L and B"<<endl;
    cin>>l>>b;
    cout<<"Enter the value of R"<<endl;
    cin>>r;

    cout<<"Area of Rectangle: "<<area(l,b)<<endl;
    cout<<"Area of Circle: "<<area(pi,r)<<endl;


 return 0;
}

int area(int a, int b){
    return a*b;
}
float area(float pi, int r){
    return pi*r;
}