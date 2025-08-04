#include<stdio.h>

int main (){
	int n;

int i = 1;
int total = 0 ;

do{
if(i%2==0){
printf("%d\t",i);
 total  += i;
}
   i++;
  
}while(i<=10);
 printf("=%d\t",total);
return 0;
}