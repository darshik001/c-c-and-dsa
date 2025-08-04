#include<stdio.h>

int main (){
    int arr[3][3];
	int uppertranglsum =0;
	int lowertranglsum = 0;
	int dimondsum = 0;
  for(int i = 0; i<3;i++){
       for(int j =0;j<3;j++){
	       printf("Enter element %d and %d:",i,j);
		   scanf("%d",&arr[i][j]);
	   }
	   printf("\n");
  }
  
  
 for(int i = 0; i<3;i++){
       for(int j =0;j<3;j++){
       
		   printf("%d",arr[i][j]);
       }
	   printf("\n");
 }
 
 
	uppertranglsum = arr[0][1] + arr[0][2] + arr[1][2]; 
    lowertranglsum = arr[1][0] + arr[2][0] + arr[2][1]; 
    dimondsum = arr[0][0] + arr[1][1] + arr[2][2];

    
    printf("uppertranglsum of elements : %d\n", uppertranglsum);
    printf("lowertranglsum of elements : %d\n", lowertranglsum);
    printf("dimondsum of elements : %d\n", dimondsum);   
  

return 0;
}



