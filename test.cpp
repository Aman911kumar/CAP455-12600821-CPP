#include <iostream>
using namespace std;

int main()
{
  int sum(int, int);
  float sum(float, float);
  cout << "The sum of 10 and 20" << sum(10, 20) << endl;
  cout << "The sum of 10 and 20" << sum(2.3, 3.4);
  
}

int sum(int a, int b)
{
  return (a + b);
}

float sum(float x, float y)
{
  return (x + y);
}