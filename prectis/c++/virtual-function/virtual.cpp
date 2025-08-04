#include<iostream>

using namespace std;
 class Base{
  public:
 virtual void display ()=0;
//  virtual void display(){
//     cout<<"Base class call"<<endl;
//   }

 };

 class Drived:public Base{
   public:
   void display(){
    cout<<"drived class function call"<<endl;
   }

 };


int main (){
  Base *b;

  Drived d1;

  b = &d1;

  b->display();
  


}
