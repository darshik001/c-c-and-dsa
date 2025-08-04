#include<stdio.h>

int main (){
	int n;

int i = 1;
int total = 0 ;

do{
printf("%d",i);
 total  += i;
   i++;
  
}while(i<=10);
 printf("=%d\t",total);
return 0;
}