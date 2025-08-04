#include<iostream>
using namespace std;

class Base{
  protected:
  int a = 10;
};

class Derive1:public Base{
  public:
  int b = 20;
};

class Derive2:public Derive1{
  protected:
  int c = 30;

  public:
     void sum(){
        cout<<"Sum is:"<<a+b+c;
     }
};

int main(){
  class Derive2 d2;
  
  d2.sum();
}