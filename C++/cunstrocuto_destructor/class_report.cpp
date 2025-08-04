#include<iostream>
using namespace std;

class Report{
private:
int admno;
char name[20];
float marks[5];
float average=0;

int getavg() ;

public:
Report(){
  cout<<"Enter addmition number:";
  cin>>admno;
  cout<<"Enter Name:";
  cin>>name;

  for (int i = 0; i <5; i++){
  cout<<"Enter Marks of\t"<<i<<":";
      cin>>marks[i];
  }
  
}
int displayinfo(){
  cout<<"admno:"<<admno<<endl;
  cout<<"name:"<<name<<endl;
  for (int i = 0; i < 5; i++)
  {
   cout<<"marks of sub"<<i<<":"<<marks[i]<<endl;
  }
  cout<<"average:"<<getavg()<<endl;
  
}
  ~Report(){
    cout<<"Destructor is called";
  }
};
int Report:: getavg() {
  int total=0;
      for (int i = 0; i < 5; i++)
      {
        total += marks[i];
      }
      average = total/5;
      return average;
}


int main(){
Report r1;

r1.displayinfo();

}