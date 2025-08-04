#include<iostream>
using namespace std;

class Base{
  protected:
  int a;

  public:
  void getA(){
    cout<<"Enter value of a:";
    cin>>a;
  }
};

class Drived1:public Base{
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

class Drived2:public Base{
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


int main(){
class Drived1 d1;
d1.getA();
d1.getB();
d1.sum();

 class Drived2 d2;
d2.getA();
d2.getC();
d2.voluem();
  return 0;
}