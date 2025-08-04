#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 5


int getdata(int arr[],int m){
  srand(time(0));
   for (int i = 0; i < m; i++)
   {
    arr[i]= (rand()%50)+10;
   }

   for (int i = 0; i < m; i++)
   {
    printf("%d\t",arr[i]);
   }
   
   printf("\n");
}

int large(int arr[],int m){
  
  int  largest = 0;

  for (int i = 0; i < max; i++)
  {
    if (arr[largest]<arr[i])
    {
      largest = i;
    }
  }
      printf("largest is:%d",arr[largest]);
  
   
  
}


int main(){
int arr[max];

getdata(arr,max);
large(arr,max);
}