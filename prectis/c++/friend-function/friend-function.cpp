#include<iostream>
using namespace std;
class Complex{
  
  int x;
  int y;
  int z;
 friend Complex add(Complex,Complex);
  public:
  int getdata(int a,int b,int c){
    x = a;
    y = b;
    z  = c;
  }

  int volume(){
      return x*y*z;
  }
};

  Complex add(Complex l,Complex m){
 Complex t;
 t.x = l.x+m.x;
 t.y = l.y+m.y;
 t.z = l.z+m.z;
 return t;
   
  }
int main(){
   class Complex c1,c2,c3;
   c1.getdata(2,4,6);
   c2.getdata(9,10,12);
   cout<<"Voluem c1:"<<c1.volume()<<endl;
   cout<<"Voluem c2:"<<c2.volume()<<endl;

 c3 = add(c1,c2);
   cout<<"Voluem c3:"<<c3.volume()<<endl;
    
}