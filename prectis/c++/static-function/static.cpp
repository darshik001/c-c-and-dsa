#include<iostream>

using namespace std;
class Comlex{
  protected:
 static int count;
        int a =0;

  public:
  void display(){
    count++;
    a++;
  }
   void printa(){
    cout<<"Value of a:"<<a<<endl;
  }

  static void print(){
    
    cout<<"vale of count:"<<count<<endl;
  }

};
int Comlex::count = 0;

int main (){
Comlex d1;
d1.display();
d1.printa();
d1.print();

Comlex d2;
d1.display();
d2.printa();
d2.print();

Comlex d3;
d1.display();
d3.printa();
d3.print();

Comlex d4;
d1.display();
d4.printa();
d4.print();

}