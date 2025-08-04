#include<iostream>
using namespace std;

class Complex{
int x;
int y;

public:
   void getdata(int a ,int b)
   {
    x=a;
    y=b;
   }
   Complex  operator+(Complex z){
    Complex t;
         t.x = x+z.x;
         t.y = y+z.y;

         return t;

   }

   void printdata(){
      cout<<"value of x"<<x<<endl;
      cout<<"value of y"<<y<<endl;
    
   }

   


};

int main (){

  class Complex c1,c2,c3;
  c1.getdata(10,20);
  c1.printdata();

  c2.getdata(30,40);
  c2.printdata();

  c3 = c1+c2;
  c3.printdata();

}