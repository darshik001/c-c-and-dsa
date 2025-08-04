#include<iostream>
using namespace std;

class Complex {
  int x;
  int y;

public:
  void getdata(int a,int b){
    x=a;
    y=b;
  }

  void printdata(){
     cout<<"value of x:"<<x<<endl;
     cout<<"value of y:"<<y<<endl;

  }
 Complex operator-(){
    x=-x;
    y=-y;
  }

};

int main (){
  class Complex c1;
  c1.getdata(-10,-20);
  c1.printdata();
 -c1;
 c1.printdata();
}