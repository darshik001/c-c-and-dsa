#include<iostream>
using namespace std;

class Test{
int testcode;
char Description[20];
 int NoCandidate;
 int CenterReqd;

 int calcnter(int NoCandidates);

 public:
 Test(){
    cout<<"Enter testcode:";
      cin>>testcode;
      cout<<"Enter Description:";
      cin>>Description;
      cout<<"Enter NoCandidate:";
      cin>>NoCandidate;
     
 }
  void disptest(){
      cout<<"testcode:"<<testcode<<endl;
      cout<<"Description:"<<Description<<endl;
      cout<<"NoCandidate:"<<NoCandidate<<endl;
      CenterReqd =calcnter(NoCandidate);
      cout<<"CenterReqd:"<<CenterReqd<<endl;
  }
~Test(){
      cout<<"Destructor is called";
}
};

int Test::calcnter(int NoCandidates){
return (NoCandidates/100+1);
 
}


int main (){
  Test t1;
  t1.disptest();
}