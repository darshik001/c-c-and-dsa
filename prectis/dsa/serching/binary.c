#include<stdio.h>
#include<stdlib.h>

#define max 6

void getdata(int arr[]){
  for (int i = 0; i < max; i++)
  {
    arr[i] = (rand()%50)+10;
    printf("%d\t",arr[i]);
  }
  printf("\n");
}

int serching(int arr[],int lover,int high){
  int element;
  int mid=0;
printf("Enter to finde value:");
scanf("%d",&element);

while (lover<=high)
{
  mid = (lover+high)/2;
  if (arr[mid]==element)
  {
    return mid;
    
  }else if(arr[mid]<element){
    lover = mid+1;
  }else{
    high = mid -1;
  }
  
}

if (arr[mid]!=element)
{
  return -1;
}


}


int main(){
  // int arr[max]={12,23,34,45,56,69};
  int arr[max];

int lower = 0;
int high = max-1;
  getdata(arr);
  int result = serching(arr,lower,high);

  if (result ==-1)
  {
    printf("result not found");
  }else{
    printf("result found in index:%d",result);
  }
  
}