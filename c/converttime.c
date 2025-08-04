#include <stdio.h>
int main (){
   int  userseconds;
   int hours;
   int minuts;
   int second;
   printf("Enter sec onds:");
   scanf("%d",&userseconds);
   
   hours = userseconds/3600;
   printf("hours:%d\n",hours);
   
   second = userseconds - hours*3600;
   
   minuts = second/60;
   printf("minuts:%d\n",minuts);
   
   second = second - minuts*60;
   printf("second:%d",second);
   
   
   
   

return 0;
}