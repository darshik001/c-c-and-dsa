#include<stdio.h>

int main (){
	
int i = 65;
while(i<=69){
	int j = i;
	  while(j>=65){
		  printf("%C\t",j);
		  j--;
	  }
	printf("\n");
	i++;
}

return 0;
}