#include<iostream>
using namespace std;

class Student{
private:
int adno;
char sname[20];
float eng,math,science;
float total;
float ctotal(float eng,float math,float scinece);

public:
Student(){
    cout<<"Enter adno:";
    cin>>adno;
    cout<<"Enter name:";
    cin>>sname;
    cout<<"Enter English marks:";
    cin>>eng;
     cout<<"Enter Math marks:";
    cin>>math;
     cout<<"Enter science marks:";
    cin>>science;

}
  void showdata(){
    cout<<"Addmition No:"<<adno<<endl;
    cout<<"Student Name:"<<sname<<endl;
    cout<<"English Marks:"<<eng<<endl;
    cout<<"Math Marks:"<<math<<endl;
    cout<<"Scinece Marks:"<<science<<endl;
 cout<<"Total marks:"<<ctotal(eng,math,science)<<endl;
  }
  ~Student(){
    cout<<"constructor is called";
  }
};
float Student::ctotal(float eng,float math,float science){
      return eng+math+science;
}

int main(){
  Student s1;
  s1.showdata();
}