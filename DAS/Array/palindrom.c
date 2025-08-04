#include<stdio.h>
#define max 5

int main(){
  int arr[max] = {1,2,3,2,1};
 int size = 0;
 int palindrom;
  for (int i = 0; i < max; i++)
  {
    printf("%d\t",arr[i]);
     size++;
  }
 printf("\n");
 

  for (int i = 0; i<max/2; i++,size--)
  {
     if (arr[i]==arr[size-1])
     {
      palindrom = 1;
    
     }  else{
      
      palindrom = 0;

      break;
     }
     
  }
  

  if (palindrom==1) {
    printf("this arr is palindrom serise");
  }else {
   printf("this arr not is palindrom serise");
}
  
  
  
}