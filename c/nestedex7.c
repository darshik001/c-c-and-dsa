#include <stdio.h>

int main() {
    int a  = 1;
	int b = 1;
	int c;
	
	int n,i;
	
	  printf("Enter value of n:");
	  scanf("%d",&n);
     for ( i = 1; i<=n;i++){
		 printf("%d\t",a);
		 c = a+b;
		 a = b;
		 b = c;
	 }
    
    return 0;
}
