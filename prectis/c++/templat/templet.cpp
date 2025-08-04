#include<iostream>
using namespace std;

class Base{
public:
template<class t,class h>

void print(t a, h b){
   cout<<"value of a+b:"<<a+b;
}

};


int main(){
  Base b1;
  b1.print(10,10.22);
  Base b2;
  b2.print(10.26,20.26);
}