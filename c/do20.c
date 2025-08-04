#include<stdio.h>

int main (){
	

int i = 65;


do{
if(i%2==1){
printf("%c\t",i);
 i = i+34;
printf("%c\t",i);
 i  = i - 32;
}
   i++;
   
  
}while(i<90);

return 0;
}