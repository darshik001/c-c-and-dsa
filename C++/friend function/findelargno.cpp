// #include<iostream>

// using namespace std;

// class Large{
// int x ;
// int y;
// int z;
//      friend Large shoew(Large);
// public:
//    void getdata(int a,int b,int c){
//      x=a;
//      y=b;
//      z=c;
//  }


// };

// Large shoew(Large a){

// if (a.x>a.y&&a.x >a.z)
// {
//   return a.x;
// } else if()
// {
//   /* code */
// }


 
// }


// int main (){
   
//    class Large l1,l2;

//    l1.getdata(10,20,30);
//  l2 = shoew(l1)

// }




#include <iostream>
using namespace std;

class Large {
    int x, y, z;
    friend Large showLargest(Large); // Friend function to find the largest number

public:
    void getdata(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }
};

// Friend function to find and return the largest number
Large showLargest(Large a) {
    if (a.x > a.y && a.x > a.z)
        return a.x;
    else if (a.y > a.z)
        return a.y;
    else
        return a.z;
}

int main() {
    Large l1;
    l1.getdata(10, 20, 30);

    int largest = showLargest(l1); // Call the friend function
    cout << "The largest number is: " << largest << endl;

    return 0;
}
