#include<iostream>
using namespace std;

class Sum{
  private:
  int a;
  int b;
 public:
 void getdata(){
   cout<<"Enter Value of a:";
   cin>>a;
   cout<<"Enter Value of b:";
   cin>>b;
 }

 void printdata(){
  cout<<"value of a+b:"<<a+b;
 }

};

int main(){
  class Sum s1;
  s1.getdata();
  s1.printdata();
}