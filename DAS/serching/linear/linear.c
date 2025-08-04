#include<stdio.h>
#include<stdlib.h>
#define n 5

int main(){
int arr[n];
int user,count=0;
for (int i = 0; i < n; i++)
{
  arr[i] = rand()%50 +10;
}

for (int i = 0; i < n; i++)
{
  printf("%d ",arr[i]);
}

printf("\nEnter value to finde arr:");
scanf("%d",&user);

for (int i = 0; i < n; i++)
{
  if (arr[i]==user)
  {
    printf("value is found\n");
    break;
  } else{
    count++;
  }
  
}

if (arr[count]==user)
{
 printf("value is found position:%d",count);
}



}