#include<stdio.h>

int main (){
char stud[5];
int sub[3];
int total;
int pr ;
for(int i = 1;i<=5;i++){
       
	  for(int j = 0;j<3;j++){
		   printf("Enter marks of student:");
		   scanf("%d",&sub[j]);
		   
		   
	  }
	  total = sub[0]+sub[1]+sub[2];
	  pr = (total*100)/300;
	  printf("\ntotal marks of student %d:%d\n",i,total);
	  printf("parsentage:%d\n",pr);
	  
	  
	  if(pr>=75){
		  printf("this student grade is A");
	  }else if(pr>=60 &&pr<75){
		  printf("this student grade is B");
	  }else if(pr>=45 &&pr<60){
		  printf("this student grade is C");
	  }else if(pr>=35 &&pr<45){
		  printf("this student grade is B");
	  } else{
		   printf("this student is faill");
	  }
	  
	  
	printf("\n");
}

return 0;
}