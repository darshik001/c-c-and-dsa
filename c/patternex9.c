#include <stdio.h>

int main() {
    int n = 65;  

    for (int i = 1; i <= 5; i++) {  
        for (int j = 1; j <= i; j++) {  
              printf("%c",n);
			   n +=1;
        }
        printf("\n");  
    }

    return 0;
}
