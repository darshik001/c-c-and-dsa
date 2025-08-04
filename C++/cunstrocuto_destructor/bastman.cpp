#include<iostream>
using namespace std;

class Bastman{
  int bcode;
  char bname[20];
  int innings, notout, runs;
 float batavg;

 float calcavg(int inning,int notout,int runs);
 public:
    Bastman (){
      cout<<"Enter Bastman Code:";
      cin>>bcode;
      cout<<"Enter Bastman Name:";
      cin>>bname;
      cout<<"Enter Bastman Inning:";
      cin>>innings;
      cout<<"Enter Bastman Notout Inning:";
      cin>>notout;
      cout<<"Enter Bastman Run:";
      cin>>runs;
    }
    void displaydata(){
      cout<<"Bastman Code:"<<bcode<<endl;
      cout<<"Bastman Name:"<<bname<<endl;
      cout<<"Bastman Inning"<<innings<<endl;
      cout<<"Bastman Notout Inning:"<<notout<<endl;
      cout<<"Bastman Run:"<<runs<<endl;
      batavg = calcavg(innings,notout,runs);
     cout<<"Bastman average:"<<batavg<<endl;
    }
    ~Bastman(){
      cout<<"Destructor is called";
    }
};

  float Bastman::calcavg(int inning,int notout,int runs){
    return runs/(inning-notout);
     
  }


  int main (){
     Bastman b1;
     b1.displaydata();
  }
