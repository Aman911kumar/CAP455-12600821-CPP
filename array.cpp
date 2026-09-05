#include <iostream>
using namespace std;

int main(){
    // ways of accessing the element of an array
    int a[]={1,2,3,4,5,6,7};

    cout<<"a[0] = "<<a[0]<<endl;
    cout<<"0[a] = "<<0[a]<<endl;
    cout<<"*(a+0) = "<<*(a+0)<<endl;
    cout<<"*(0+a) = "<<*(0+a)<<endl;
    cout<<"*&a[0] = "<<*&a[0]<<endl;

 return 0;
}