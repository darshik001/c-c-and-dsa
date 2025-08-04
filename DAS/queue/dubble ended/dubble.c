#include <stdio.h>
#define max 6

int front = -1;
int rear = -1;

void insert_front(int arr[],int m,int element){
  if ((front==0&&rear==m-1)||front==rear+1)
  {
    printf("Queue is full\n");
  } else if (front==-1&&rear==-1)
  {
    rear = front = 0;
    arr[front] = element;
  }else if (front==0)
  {
    front = m-1;
    arr[front] = element;
  }else{
    front--;
    arr[front] = element;
  }
}

void insert_reare(int arr[],int m,int element){
  if ((front==0&&rear==m-1)||front==rear+1)
  {
   printf("Queue is full\n");

  }else if (front==-1&&rear==-1){
    rear = front = 0;
    arr[rear] = element;
  }else if (rear==max-1)
  {
    rear = 0;
    arr[rear] = element;
  } else{
    rear++;
    arr[rear] = element;
  }
  

}


void delete_front(int arr[],int m){
       if (rear==-1&&front==-1)
       {
            printf("Queue is emty\n");
            
       }else if (rear==front) {
       front = rear =-1;

       } else  if (front==m-1)
       {
         front =0;

       } else{
         front++;
       }
  
}

void delete_rear(int arr[],int m){
     if (rear==-1&&front==-1)
       {
            printf("Queue is emty\n");
            
       }else if (rear==front) {

       front = rear =-1;

       } else if (rear==m-1)
       {
         rear =0;
       } else{
         rear--;
       }
}

int dispay(int arr[],int m){
      int i = front;

    if (front==-1&&rear==-1)
    {
      printf("Queue is emty");
    }else{
      while (i!=rear)
      {
        printf("%d:%d\t",arr[i],i);
        i = (i+1)%m;
      }
      printf("%d:%d\n",arr[rear],rear);
      
    } 
}


int main(){
int arr[max];


insert_front(arr,max,1);
insert_reare(arr,max,2);
insert_reare(arr,max,3);
insert_reare(arr,max,4);
insert_reare(arr,max,5);
insert_reare(arr,max,6);
delete_front(arr,max);
// delete_rear(arr,max);
dispay(arr,max);

}