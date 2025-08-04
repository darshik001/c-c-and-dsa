#include<stdio.h>
#include<stdlib.h>
#define max 5


int getdata(int arr[],int m){
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

int addelement(int arr[],int m){
  int index ;
int elemnt;

printf("Enter index to chang:");
scanf("%d",&index);
printf("Enter elemnt:");
scanf("%d",&elemnt);
 for (int i = m-1; i >index; i--)
 {
   arr[i+1] = arr[i];
 }

 arr[index] = elemnt;

  for (int i = 0; i <m; i++)
   {
    printf("%d\t",arr[i]);
   }
}


int main(){
int arr[max];

getdata(arr,max);
addelement(arr,max);
}