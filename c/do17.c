#include<stdio.h>

int main (){
	int n;
printf("Enter value of n:");
scanf("%d",&n);
int i = 1;
int m = 1;
do{

  printf("%d\t",i*m);
    m = m+m;
   i++;

}while(i<=n);

return 0;
}