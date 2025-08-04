#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);
  int total = 1;
     for (int i = 1; i<=n;i++){
		 
		
		 printf("%d-", i*total);
		 total = total + total;
		 printf("%d\t", i*total/2);
	 }
    
    return 0;
}
