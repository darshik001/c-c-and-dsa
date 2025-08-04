#include<iostream>
using namespace std;
class Base{
  protected:
  int a ;
  public:
  void geta(){
    cout<<"enter value of a:";
    cin>>a;
  }
};
//multi level inheritans
  class Base2:public Base{
     protected:
     int b;
     public:
     void getb(){
      cout<<"enter value of b:";
    cin>>b;
     }
  };

  class deriveds:public Base2{
     public:
     void printdata(){
      cout<<"sum of A+B:"<<a+b;
     }
  };

//hierachical inheritans
class Drived2:public Base{
protected:
int b;
public:
void getB(){
  cout<<"Enter value of b:";
  cin>>b;
}

void sum(){
  cout<<"Sum of a+b:"<<a+b<<endl;
}

};

class Drived3:public Base{
protected:
int c;
public:
void getC(){
  cout<<"Enter value of c:";
  cin>>c;
}
void voluem(){
  cout<<"volume of a*c"<<a*c;
}
};

int main (){
  //multilevel
  cout<<"Multilevel inheritans"<<endl;
 class deriveds d1;
   d1.geta();
   d1.getb();
   d1.printdata();

   //hierachical
   cout<<"hierachicla inheritans"<<endl;
   Drived2 d2;
   d2.geta();
   d2.getB();
   d2.sum();

   Drived3 d3;
   d3.geta();
   d3.getC();
   d3.voluem();
  return 0;
}
