#include <stdio.h>

int main (){
   for(int i=0;i<=8;i++){
     if(i<5){
     for(int j=i;j<5;j++){
		  printf(" ");
	 }
	 for(int k=0;k<i;k++){
		printf("* "); 
	 }
	 } else{
		for(int j=4;j<=i;j++){
		  printf(" ");
	 } for(int k=i;k<8;k++){
		printf("* "); 
	 } 
	 }
	 printf("\n");
   }

return 0;
}