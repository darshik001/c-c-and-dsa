#include <stdio.h>

int main() {
    int n = 65;  

    for (int i = 1; i <= 5; i++) {  
        for (int j = 1; j <= i; j++) {  
            if (j % 2 == 0) {
                printf("%c",n);  
            } else {
                printf("%c", n + 32 );  
				
            }
            n++; 
        }
        printf("\n");  
    }

    return 0;
}
