#include<stdio.h>
#define MAX 5
int front = -1;
int rear = -1;
int enqueue(int arr[],int m,int element){
      if (front==-1&&rear ==-1)
      {
        rear = front = 0;
        arr[rear] = element;
      }else if ((rear+1)%m==front) {
       printf("Queue is full\n");
      }else{
        rear = (rear+1)%m;
        arr[rear] = element;
      }
   
}

void dequeue(int arr[],int m){
  if (front ==-1&&rear==-1)
  {
    printf("Queue is emty\n");
  }else if (front==rear)
  {
    rear = front = -1;
  }else{
     front = (front+1)%m;
  }
  
  

}

void display(int arr[],int m){
if (rear ==-1 &&front==-1)
{
  printf("Queue is emty\n");
}else{
   int i = front;
   while (i!=rear)
   {
    printf("%d\t",arr[i]);
    i = (i+1)%m;
   }
     printf("%d\t",arr[rear]);
     printf("\n");
}



}



int main(){
int arr[MAX];
enqueue(arr,MAX,10);
enqueue(arr,MAX,20);
enqueue(arr,MAX,30);
enqueue(arr,MAX,40);
enqueue(arr,MAX,50);
enqueue(arr,MAX,60);
display(arr,MAX);

dequeue(arr,MAX);
dequeue(arr,MAX);
display(arr,MAX);

enqueue(arr,MAX,70);
enqueue(arr,MAX,80);
display(arr,MAX);


enqueue(arr,MAX,100);
dequeue(arr,MAX);
enqueue(arr,MAX,110);

display(arr,MAX);


}