#include<stdio.h>

int main (){
	int n;

printf("Enter value of n:");
scanf("%d",&n);
int i = n-n-n;

do{

  printf("%d\t",i);

   i++;

}while(i<=n);

return 0;
}