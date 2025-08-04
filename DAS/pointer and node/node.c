#include<stdio.h>

 struct node {

int data;
char charect;
struct node *ptr;

 };

int main(){
  
struct node s1,s2,s3;

s1.data = 65;
s1.charect = 'A';
s2.data = 97;
s2.charect = 'a';
s3.data = 10;
s3.charect = 's';
printf("Data:%d || charec:%c\n",s1.data,s1.charect);
printf("Data:%d || charec:%c\n",s2.data,s2.charect);
printf("Data:%d || charec:%c\n",s3.data,s3.charect);

s1.ptr =&s2;
s2.ptr =&s3;

printf("Data:%d || Charect:%c\n",s1.ptr->data,s1.ptr->charect);
printf("Data:%d || Charect:%c\n",s2.ptr->data,s2.ptr->charect);


}