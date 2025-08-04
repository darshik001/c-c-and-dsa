#include<stdio.h>
#define n 5
 int arr[n],i;
 int top = -1;
void push(int a){
   if(top>=n-1){
    printf("stack ifs full\n");
   } else{
       top++;
       arr[top]=a;
   }
}

void pop(){
    if (top<0)
    {
      printf("stack is emty\n");
    }else{
      top--;
    }
    
}

void display(){
 if (top<0)
 {
      printf("stack is emty\n");

 } else{
  for ( i = 0; i<=top; i++)
  {
   printf("%d ",arr[i]);
  }
  
 }
 printf("\n");
 
}





int main(){
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);
  display();
  pop();

  display();
  



}