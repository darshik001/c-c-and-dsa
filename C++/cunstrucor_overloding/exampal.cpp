#include<iostream>
using namespace std;

class Hello{
  public:
  Hello(){
    cout<<"Default constructor"<<endl;
  }
Hello(int a){

     cout<<"value of a:"<<a<<endl;
}

Hello(int a , int b){
  
     cout<<"value of a+b="<<a+b<<endl;
}
Hello(int c,double d){
  
     cout<<"value of c+d="<<c+d;

}
};


int main (){

class Hello h1,h2(10),h3(10,20),h4(20,20.00);

}