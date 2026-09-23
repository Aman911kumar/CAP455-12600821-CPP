#include <iostream>
using namespace std;

class B; // -- forward declation

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
    friend int BIG(A objA, B objB);
};

class B
{
    int y;

public:
    B(int a)
    {
        y = a;
    }
    void display()
    {
        cout << y << endl;
    }
    friend int BIG(A objA, B objB);
};

int BIG(A objA, B objB)
{
    if (objA.x > objB.y)
    {
        return objA.x;
    }
    else
    {
        return objB.y;
    }
}

int main()
{

    A a1(20);
    B b1(10);

    int result = BIG(a1, b1);
    cout << "Greater value is: " << result << endl;

    return 0;
}