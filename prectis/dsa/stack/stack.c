#include<stdio.h>
#define max 5
int arr[max];
int  top = -1;
int push(int elemnt){
       if (top>=max-1)
       {
        printf("stack is full\n");
       } else {
        top++;
        arr[top]=elemnt;
       }
       
}

int pop(){
   if (top<0)
   {
    printf("stak is emty\n");
   } else{
    top--;
   }
   
}

  int display(){
for (int i = 0; i <= top; i++)
{
  printf("%d\t",arr[i]);
}
printf("\n");
  }

int main(){
  push(10);

  push(20);
  push(30);
  push(40);
  push(50);
  push(60);
  push(70);


  display();
  pop();
  display();
}