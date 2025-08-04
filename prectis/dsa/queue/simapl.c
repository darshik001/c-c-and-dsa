#include <stdio.h>
#define max 5
int arr[max];
int front = -1;
int rear = -1;

int enqueue(int element)
{
  if (rear >= max - 1)
  {
    printf("Queue is Full\n");
  }
  else if (front == -1 && rear == -1)
  {
    rear = front = 0;
    arr[rear] = element;
  }
  else
  {
    rear++;
    arr[rear] = element;
  }
}

int dequeue()
{
  if (front == -1)
  {
    printf("Queue is Emty");
  }
  else if (rear == front)
  {
    rear = front = -1;
  }

  else
  {
    front++;
  }
}

int display()
{
  if (rear == -1)
  {
    printf("Queue is Emty\n");
  }
  else
  {

    for (int i = front; i <= rear; i++)
    {
      printf("%d\t", arr[i]);
    }
    printf("\n");
  }
}

int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  enqueue(60);
  display();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  display();
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  display();
}