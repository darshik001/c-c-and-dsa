#include <stdio.h>

int main (){
  int salry;
  int hra;
  int da;
  int gross;
  printf("Enter your salry:");
  scanf("%d",&salry);
   if(salry <=5000){
	    hra = salry * 8 / 100;
	    da = salry * 20 / 100;
	    salry  = salry + hra + da;
	    gross = hra + da;
		printf("Yor gross:%d\n",gross);
	    printf("Your salry is:%d",salry);
   } else if (salry>5000 && salry<=10000){
	    hra = salry * 12 / 100;
	    da = salry * 30 / 100;
	    salry  = salry + hra + da;
	    gross = hra + da;
		printf("Yor gross:%d\n",gross);
	    printf("Your salry is:%d",salry);
   }  else if (salry>10000 && salry<=15000){
	   hra = salry * 15 / 100;
	   da = salry * 40 / 100;
	   salry  = salry + hra + da;
	   gross = hra + da;
	   printf("Yor gross:%d\n",gross);
	   printf("Your salry is:%d",salry);
   } else{
	   
	    hra = salry * 20 / 100;
	    da = salry * 50 / 100;
	    salry  = salry + hra + da;
	    gross = hra + da;
	    printf("Yor gross:%d\n",gross);
	    printf("Your salry is:%d",salry);
   }
   
  
  return 0;
}