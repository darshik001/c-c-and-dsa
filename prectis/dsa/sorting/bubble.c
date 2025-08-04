#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 5
int getdata(int arr[],int m){
  srand(time(0));
   for (int i = 0; i < m; i++)
   {
    arr[i] = (rand()%50)+10;
    printf("%d\t",arr[i]);
   }
printf("\n");
}


int sorting(int arr[],int m){
  int a;
     for (int i = 0; i < max; i++)
     {
      for (int j = 0; j < m-i; j++)
      {
        if (arr[j]>arr[j+1])
        {
          a = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = a;
        }
        
      }
      
     }
     for (int i = 0; i < max; i++)
     {
      printf("%d\t",arr[i]);
     }
     
}

int main(){
  int arr[max];
  getdata(arr,max);
  sorting(arr,max);
}