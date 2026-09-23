#include <iostream>
using namespace std;

class Area{
    int l,b,result;
    public:
    Area();
    Area(int len,int bre);
    void rectangle(int len,int bre);

};

Area::Area(){}

Area::Area(int len,int bre){
    l = len, b = bre;
    result = l * b;
    cout<<"Area of rectangle is C : " << result<<endl;
}

void Area::rectangle(int len,int bre){
    l=len;
    b=bre;
    result = l * b;
    cout<<"Area of rectangle is: " << result<<endl;
}

int main(){

    int l,b;

    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breth of rectangle: ";
    cin>>b;

    Area obj1,obj2(l,b);
    obj1.rectangle(l,b);

 return 0;
}