#include<stdio.h>
#define max 5
int front  =  -1;
int rear = -1;
int enqueue(int arr[],int m){
   int element;
   printf("Enter element:");
   scanf("%d",&element);
   if (rear ==m-1)
   {
   printf("queue is full\n");
   } else if (rear==-1&&front==-1)
   {
     rear = front = 0;
     arr[rear] = element;
   }else{
     rear++;
      arr[rear] = element;
   }
   
   
}

int dequeue(){
  if (front ==-1&&rear==-1)
  {
    printf("insert element first:");
  } else if (front == rear)
  {
        rear = front= -1;
  } else{
    front++;
  }
  
  
}

void display(int arr[]){
 if (rear ==-1)
 {
    printf("queue is emty\n");
 } else{
  for (int i = front; i <=rear; i++)
  {
   printf("%d ",arr[i]);
  }
  
 }
 
 printf("\n");
}
int main(){
int arr[max];
enqueue(arr,max);
enqueue(arr,max);
enqueue(arr,max);
enqueue(arr,max);
enqueue(arr,max);
enqueue(arr,max);
display(arr);

dequeue();
dequeue();
display(arr);
}