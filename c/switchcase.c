#include<stdio.h>

int main (){

  int n;
  printf("Enter value of n");
  scanf("%d",&n);

  switch (n)
  {
  case 1:
    printf("case 1 is call");
    break;
     case 2:
    printf("case 2 is call");
    break;

  
  default:
   printf("defult case is called");
    break;
  }


  return 0;
}