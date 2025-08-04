#include<iostream>
using namespace std;

class Complex{
  private:
  int a ;
  public:

  Complex(){
    cout<<"enter value of a:";
    cin>>a;
  }

  void prinddata(){
    cout<<"value of a:"<<a<<endl;
  }
  ~Complex(){
    cout<<"Destructur is call";
  }
};


int main(){
class Complex c1;
c1.prinddata();

}