#include<stdio.h>
int factorial(int num){
  if (num==1||num==0)
  {
    return 1;
  }else{
    return factorial(num-1)*num;
  }                    
  
}

int main(){
int num=5;
printf("%d",factorial(num));
}                     