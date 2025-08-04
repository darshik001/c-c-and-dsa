#include<iostream>
using namespace std;

class Base{
  private:
  int a = 10;
  protected:
  int b = 20;
  public:
  int c = 30;
 
};

class Derived:public Base{
  public:
    void printdata(){
      // cout<<"Value of a:"<<a<<endl;
      cout<<"Value of a:"<<b<<endl;
      cout<<"Value of a:"<<c<<endl;

    }
    
};

int main (){
class Derived d1;
 d1.printdata();

}