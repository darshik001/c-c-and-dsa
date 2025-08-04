#include<iostream>
using namespace std;

class Cunstruct{
public:

Cunstruct(){
  cout<<"Normal counstructor"<<endl;
}

Cunstruct(int a){
  cout<<"Second counstructor:"<<a<<endl;

}

Cunstruct(int a,int b){
  cout<<"thord counstructor:"<<a+b<<endl;

}
Cunstruct(int a,char b){
  cout<<"forth counstructor:"<<a<<":"<<b<<endl;

}


};

int main (){
 class Cunstruct c1,c2(12),c3(20,20),c4(20,'d');
  
}