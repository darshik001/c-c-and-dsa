#include<iostream>
using namespace std;

class Sum{
  private:
  int a;
  int b;

  int getdata(int a,int b);
  
 public:
Sum(){
  cout<<"Enter Value of a:";
   cin>>a;
   cout<<"Enter Value of b:";
   cin>>b;
   cout<<"Value of a+b:"<<getdata(a,b);
 }
};

int Sum::getdata(int a,int b){
return a+b;
}


int main(){
  class Sum s1;
 

}