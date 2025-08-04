#include<iostream>
 using namespace std;

 class Box{
   int x;
   int y;
   int z;
  friend Box add(Box,Box);
   public:

   void getdata(int a,int b,int c){
     x =a;
     y =b;
     z =c;
   }
   int printdata(){
    return x*y*z;

   }

 };

  Box add(Box a,Box b){
  Box t;
  t.x = a.x+b.x;
  t.y = a.y+a.y;
  t.z = a.z+b.z;

  return t;

  }


 int main (){
  class Box b1,b2,b3;

  b1.getdata(10,20,30);
  b2.getdata(40,50,60);

cout<<"voluem of:"<<b1.printdata();
  b3 = add(b1,b2);

cout<<"voluem of:"<<b3.printdata();



 }