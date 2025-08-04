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

int reverse(int arr[],int m){
     for (int i = max-1; i >= 0; i--)
     {
    printf("%d\t",arr[i]);
     
     }
     
}


int main(){
int arr[max];

getdata(arr,max);
reverse(arr,max);
}