#include<stdio.h>


int main (){
int arr[5];

for (int i = 0; i < 5; i++)
{
   printf("Enter value of index:%d:",i);
   scanf("%d",&arr[i]);
}

for (int i = 0; i < 5; i++)
{
printf("value of index %d:%d\n",i,arr[i]);
}

  return 0;
}