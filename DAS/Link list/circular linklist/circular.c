#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;

};

struct node* head = NULL;
struct node* tali = NULL;

void insert_end(int value){
     struct node*temp = malloc(sizeof(struct node));
     temp->data = value;
     temp->next = head;

     if (head==NULL&&tali==NULL)
     {
      head = temp;
      tali = temp;
      temp->next = head;
      return;
     }

     tali->next = temp;
     tali = temp;
     
}

void delete_end(){
  struct node*ptr = tali;
  struct node*p = head;
  if (head==tali)
  {
    head = tali = NULL;
    return;
  } else if (head==NULL)
  {
    printf("list is empty");
    return;
  } else{
while (p->next!=tali)
  {
    p=p->next;
  }
  p->next = head;
  tali = p;
  free(ptr);

  }
  
  
  
}



void insert_first(int value){
  struct node*temp = malloc(sizeof(struct node));
   temp->data=value;
  temp->next = head;
  if (head==NULL&&tali==NULL)
  {
   head = temp;
   tali = temp;
   temp->next = head;
   return;
  }else{

  head = temp;
  tali->next = head;
  }
  
 

    
}

void delete_first(){
   struct node *ptr = head;
   if (head==NULL) {
    printf("List is empty");
   }else{

    if (head==tali){
     head = tali = NULL;
    }else{
      head = ptr->next;
     tali->next = head;
    }
  }
}

void insert_mid(int value,int position){
      struct node*temp = malloc(sizeof(struct node));
      struct node*ptr = head;
      struct node*p = NULL;
      temp->data=value;
if (head==NULL)
{
  head=temp;
  tali = temp;
  temp->next = head;

  return;
}

      while (ptr->data!=position)
      {
        p = ptr;
        ptr = ptr->next;
      }

       temp->next =ptr;
       p->next = temp;
     
      
     
       
}

void delete_mid(int position ){
struct node*ptr = head;
struct node*p;
if (head==NULL)
{
  printf("List is empty\n");
} else if (head->data==position)
{
  head = ptr->next;
  tali->next = head;
  free(ptr);
  if (head==tali)
  {
    head = tali = NULL;
  }
  
  return;
}else if (tali->data==position)
{
  ptr = tali;
  p = head;
while (p->next!=tali)
  {
    p=p->next;
  }
  p->next = head;
  tali = p;
  free(ptr);

}else {
     while (ptr->data!=position)
     {
      p = ptr;
      ptr = ptr->next;
     }
     p->next = ptr->next;
     free(ptr);
}
}

void display(){
  struct node*ptr = head;
  if (head==NULL)
  {
    printf("List is emty\n");
  }else
  {
    while (tali!=ptr)
    {
      printf("%d\t",ptr->data);
      ptr=ptr->next;
    }

      printf("%d\t",ptr->data);
    printf("\n");
  }
  
 }

 void displaychoose(){
     printf("Press 1: Insert End......\n");
     printf("Press 2: Delete End......\n");
     printf("Press 3: Insert First....\n");
     printf("Press 4: Delete First....\n");
     printf("Press 5: Insert Mid......\n");
     printf("Press 6: Delete Mid......\n");
     printf("Press 7: Display.........\n");
     printf("Press 8: Exit............\n");
 }
int main(){
    int value,position,choose;

    while (1)
    {
      displaychoose();
      printf("Enter Your Choose:");
      scanf("%d",&choose);
      switch (choose)
      {
      case 1:
      printf("Enter Element To Add:");
      scanf("%d",&value);
      insert_end(value);
        break;

      case 2:
      delete_end();
        break;

      case 3:
      printf("Enter Element To Add:");
      scanf("%d",&value);
      insert_first(value);
        break;  

      case 4:
      delete_first();
        break;  

      case 5:
      printf("Enter Element To Add:");
      scanf("%d",&value);
      printf("Which Position To Add:");
      scanf("%d",&position);
      insert_mid(value,position);
        break;  

      case 6:
      printf("Which Position To Delete:");
      scanf("%d",&position);
      delete_mid(position);
        break; 

      case 7:
      display();
        break;

      case 8:
      exit(0);
        break;

      default:
      printf("Enter Valid Choose\n");
        break;
      }
    }
    
}
