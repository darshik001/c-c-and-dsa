#include<iostream>
using namespace std;

class Complex
{

  
public:
void func(int a){
   cout<<"first value of a:"<<a<<endl;
}

void func(int a,int b){
   cout<<"second value of a+b:"<<a+b<<endl;
}

void func(string a,double b){
   cout<<"thord value of a+b:"<<a<<":"<<b<<endl;
}
  
};




int main (){
 class Complex c1;
 c1.func(10);
 c1.func(10,20);
 c1.func("Hello",10.00);

}