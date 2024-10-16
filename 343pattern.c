#include <stdio.h>

int main() {
    int i, j, rows, num = 0, spc, count;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {  
        for (spc = 1; spc <= rows - i; spc++) {  
            printf(" ");
        }
        count = i; 
        for (j = 1; j <= 2 * i - 1; j++) {  
            printf("%d", count);
            if (j < i) {
                count++;  
            } else {
                count--;  
            }
        }
        printf("\n");  
    }
    return 0;
}

