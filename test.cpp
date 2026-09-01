#include <iostream>
using namespace std;

int main(){
  int a=2, b=3,c=4, d=5, x;
  x = ++a >= ++b && ++c <= ++d;
  cout << x << " " << a << " " << b << " " << c << " " << d << endl;

  return 0;
}