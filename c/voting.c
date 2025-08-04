#include <stdio.h>

int main(){
   int age;
   printf("Enter tour age:");
   scanf("%d",&age);
   
   if(age<18){
     printf("you are not eligible to voting");
   } else{
    printf("you eligible for voting");
   }
return 0;
}