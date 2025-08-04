#include <stdio.h>

int main (){
int grade;
printf("Enter your grade:");
scanf("%d",&grade);
if (grade>=75){
	printf("this student grade is A");
	
} else if (grade<75 &&grade>=60){
	
	printf("this student grade is B");
}else if (grade<60 &&grade>=45){
	
	printf("this student grade is C");
}else if (grade<45 &&grade>=35){
	
	printf("this student grade is D");
} else{
	
	printf("this student is Fail");
}
return 0;
}