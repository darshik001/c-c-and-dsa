#include <iostream>
using namespace std;

class Flightfuel{
 int Flightno;
 char Destination[20];
 float Distance;
 float Fuel;
  void calfuel(float Distance);

  public:
  Flightfuel(){
    cout<<"Enter flight no:";
    cin>>Flightno;
    cout<<"Enter distination:";
    cin>>Destination;
    cout<<"Enter Distance:";
    cin>>Distance;
  }
 void  showinfo (){
    cout<<"Flight No:"<<Flightno<<endl;
    cout<<"Distination:"<<Destination<<endl;
    cout<<"distance:"<<Distance<<endl;
    calfuel(Distance);
    cout<<"Fuel are used:"<<Fuel;
 }
   ~Flightfuel(){
    cout<<"Destructor Is Called:";
   }
};

void Flightfuel::calfuel(float Distance){
  if (Distance>0 && Distance<1000)
  {
   Fuel = 500;
  } else if (Distance>=1000 && Distance<=2000)
  {
    Fuel = 1100;
  } else{
    Fuel = 2200;
  }
  
}


int main (){
Flightfuel f1;
f1.showinfo();
}