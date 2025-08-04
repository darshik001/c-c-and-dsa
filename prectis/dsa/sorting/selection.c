#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 5
int small;
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
  for (int  i = 0; i < m; i++)
  {
    small=i;
    for (int j = i+1; j < max; j++)
    {
      if (arr[small]>arr[j])
      {
        
      small = j;
        // a = arr[i];
        // arr[i] = arr[j];
        // arr[j] = a;
      }
    }
       a = arr[i];
       arr[i]=arr[small];
       arr[small] = a;
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