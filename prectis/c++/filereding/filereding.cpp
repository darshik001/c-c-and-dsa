#include<iostream>
#include<fstream>
using namespace std;

int main(){
char input[50];

ofstream os;

os.open("abc.txt");
cout<<"enter name:";
cin.getline(input,100);
os<<input;
os.close();

ifstream is;
string line;
is.open("abc.txt");

while (getline(is,line))
{
  cout<<line;
}
is.close();

}