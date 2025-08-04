
#include<iostream>

using namespace std;

 class Books {
  private:
  int booksno;
  char booktitle[20];
  float price;
  int totalcost(int n);

  public:
  int input(){
    cout<<"Enter book no:";
    cin>>booksno;
    cout<<"Enter bookstitle:";
    cin>>booktitle;
    cout<<"Enter price:";
    cin>>price;

  }
  int purchase(){
    int n;
    cout<<"how much purchase book:";
    cin>>n;
    cout<<"total payout:"<<totalcost(n);
  }
 };



   int Books::totalcost(int n){
    
   price =  n* price;
   return price;
   }
int main (){
Books b1;
b1.input();
b1.purchase();


}