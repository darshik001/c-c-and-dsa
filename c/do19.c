#include<stdio.h>

int main (){
	int n;
printf("Enter value of n:");
scanf("%d",&n);
int i = 1;
int a= 1;
int b;
int c;
do{

  printf("%d\t",a);
    c = a+b;
    b = a;
    a = c;
   i++;

}while(i<=n);

return 0;
}