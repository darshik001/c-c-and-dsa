#include<stdio.h>

int main (){

int a;
printf("Enter value of a:");
  scanf("%d",&a);

  switch (a){
    case 1:
    printf("You Enter 1");
    break;
     case 2:
    printf("You Enter 2");

    break;
     case 3:
    printf("You Enter 3");

    break;
     case 4:
    printf("You Enter 4");

    break;
    default:
    printf("You Enter >=5");

    break;
  }

  return 0;
}