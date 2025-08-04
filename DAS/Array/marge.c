#include<stdio.h>
#include<stdlib.h>
#define max 5


int getdata(int arr1[],int arr2[],int m){
   for (int i = 0; i < m; i++)
   {
    arr1[i]= (rand()%50)+1;

    arr2[i]= (rand()%50)+10;

   }

   for (int i = 0; i < m; i++)
   {
    printf("%d\t",arr1[i]);
   }
   
   printf("\n");
   for (int i = 0; i < m; i++)
   {
    printf("%d\t",arr2[i]);
   }
   printf("\n");

}

int mergearr(int arr1[],int arr2[],int arr3[],int m){
   int index = 0;
   for (int i = 0; i < max; i++,index++)
   {
      arr3[index] = arr1[i];
   }
   for (int i = 0; i < max; i++,index++)
   {
      arr3[index] = arr2[i];
   }
   

   for (int i = 0; i <index; i++)
   {
    printf("%d\t",arr3[i]);
   }
   
}


int main(){
int arr1[max];
int arr2[max];
int arr3[50];

getdata(arr1,arr2,max);
mergearr(arr1,arr2,arr3,max);
}