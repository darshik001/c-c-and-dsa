#include<iostream>
using namespace std;

class Base1{
  protected:
  int a;
  public:
  void getdata1(){
    cout<<"Enter value of a:";
    cin>>a;
  }
};

class Base2{
  protected:
  int b;
  public:
  void getdata2(){
    cout<<"Enter value of b:";
    cin>>b;
  }
};

class Derive:public Base1, public Base2{
   public:

   void printdata(){
     cout<<"Sum of a+b:"<<a+b;
   }

};

int main(){
  class Derive d;

  d.getdata1();
  d.getdata2();
  d.printdata();
  
}