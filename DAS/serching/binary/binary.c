#include<stdio.h>

int binary(int arr[],int lower,int high){
  int findvalue;

  printf("Enter number to find:");
  scanf("%d",&findvalue);

  int mid;
  while (lower<=high) {
   mid = (lower+high)/2;
   printf("mid is:%d\n",mid);
   if (arr[mid]==findvalue) {                              
     return mid;
   }else if (arr[mid]<findvalue) {
     lower = mid +1;
   }else{
    high = mid-1;
   }
  }

  if (arr[mid]!=findvalue)
  {
    return -1;
  }
  
}

int main(){
  int arr[8] = {2,4,6,8,10,12,14,16};
  int lower = 0;
  int high = 8;
  
int result = binary(arr,lower,high-1);
if (result ==-1)
{
  printf("data not found");
} else{
  printf("data found is index:%d",result);
}

}