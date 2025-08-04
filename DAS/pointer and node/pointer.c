
#include<stdio.h>


int main(){
   int a = 15;
   int b = 20;
  int *c;
  int *d;

  printf("value of a:%d\n",a);
  printf("value of a:%d\n",b);

  c = &a;
  d = &b;


  printf("value of ponter c:%d\n",*c);
  printf("value of ponter c:%d\n\n",*d);

  *c = *c+*d;
  *d = *c-*d;
  *c = *c-*d;

  printf("value of ponter c:%d\n",*c);
  printf("value of ponter c:%d\n",*d);

}