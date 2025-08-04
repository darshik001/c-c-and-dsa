#include <iostream>
using namespace std;

class Complex
{

public:
  void printdata(int a)
  {
    cout << "value of a:" << a << endl;
  }

  void printdata(int a, int b)
  {
    cout << "value of a:" << a << endl;
    cout << "value of b:" << b << endl;
  }
  //  void printdata(float a, int b)
  // {
  //   cout << "value of aa:" << a << endl;
  //   cout << "value of bb:" << b << endl;
  // }
  void printdata(double a, int b)
  {
    cout << "value of aa:" << a << endl;
    cout << "value of bb:" << b << endl;
  }
};

int main()
{
  class Complex c1;

  c1.printdata(10);
  c1.printdata(10, 20);
  // c1.printdata(30.00f, 40);
  c1.printdata(50.00,60);
}

