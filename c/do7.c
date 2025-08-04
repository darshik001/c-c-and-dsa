#include<stdio.h>

int main (){
	int n;
printf("Enter value of n:");
scanf("%d",&n);
int i = 1;
do{
if(i%2==0){
  printf("%d\t",i);
}
   i++;

}while(i<=n);

return 0;
}