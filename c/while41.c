#include<stdio.h>

int main (){
	int n= 1;
   int i = 1;
   while(i<=5){
   int j = 1;
      while(j<=i){
		
	     printf("%d",n%2);
         n++;		 
		 j++;
	  }
       
   printf("\n");
     i++;
   }

return 0;
}