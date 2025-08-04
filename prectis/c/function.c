#include<stdio.h>
  int a ;
  void getvalue(){
printf("Enter value of a:");
scanf("%d",&a);
  }
 int func(){
  

 
    return a;

  }
int main (){

getvalue();
  // printf("value of a:%d",func());
  printf("value of a:%d",a);

  return 0;
}