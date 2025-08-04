#include<stdio.h>
#include<stdlib.h>
#define max 6

int sorting(int arr[],int m){
   for (int  i = 0; i < max; i++)
   {
    arr[i]= (rand()%50)+10;
    printf("%d\t",arr[i]);
   }
printf("\n");

       int element;
       int index = 0;
       printf("Enter element to finde:");
       scanf("%d",&element);

   for (int i = 0; i < max; i++)
   {
      if (arr[i] == element)
      {
          printf("result found");
          break;
      }else{
        index++;
      }
      
   }
    printf("\n");
   if (arr[index] !=element)
   {
      printf("result not found");            
   } else{
      printf("result found in index:%d",index);
   }
   
   
}

int main(){
  int arr[max];
 sorting(arr,max);
}