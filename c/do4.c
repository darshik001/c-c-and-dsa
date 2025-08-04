#include<stdio.h>

int main (){
	int n;
printf("Enter value of n:");
scanf("%d",&n);
int i = n;
do{
  printf("%d\t",i);
   i--;

}while(i>=1);

return 0;
}