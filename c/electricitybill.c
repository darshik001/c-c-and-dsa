#include <stdio.h>

int main (){
int unit;
printf("Enter units to use:");
scanf("%d",&unit);

printf("Total units are use:%d\n",unit);

if(unit> 0 &&unit<100){
float total = unit * 0.60+50;
printf("%f",total);
	
} else if(unit>100 && unit<200){
	float total = unit * 0.80 + 50;
printf("%f\n",total);
	
} else{
	float total = unit * 0.90 +50;
     if (total >300){
		float addcharg = total * 15 /100;
		
		total = total + addcharg;
		printf("total ammount is:%f",total);
	} else{
		 
	 printf("%f",total);
	 }
}
return 0;
}