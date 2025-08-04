#include<stdio.h>
       int fego(int num){
  if (num==1||num==0)
  {
   return 1;
  }else{
    return num = fego(num+1)+fego(num+1);
  }
  
       }
int main(){
 int resilt= fego(5);
 printf("%d",resilt);
}