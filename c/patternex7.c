#include <stdio.h>

int main (){
	
	int n = 65;
	int m = 97;
	 for (int i=1;i<=5;i++){
		 if(i%2 == 1){
		 for (int j=0;j<i;j++){
			 printf("%c",n);
			 n= n +1;
			 m = m+1;
		 }
		 } else{
			for (int j=0;j<i;j++){
			 printf("%c",m);
			 n= n +1;
			 m = m+1; 
		 }
		 }
		 printf("\n");
	 }
	return 0;
}