#include <stdio.h>

int main() {
    int i, j;
    int row, col;

    // Prompt user for matrix dimensions
    printf("Enter the number of rows for a matrix: \n");
    scanf("%d", &row);
    printf("Enter the number of columns for a matrix: \n");
    scanf("%d", &col);
  
    
    if (row != col) {
        printf("Rows and columns do not match. tracing can't be done.\n");
        return 1;
    }
    
     int a[row][col],trace=0,r[row][col],transpose[row][col];
     
     printf("Enter elements for the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     
     for (i = 0; i<row; i++){
     for( j = 0; j<col; j++){
     		if ( i==j ){
     		trace +=a[i][j];
     		}
     		}
     		}
     	printf("\nTrace of the given matrix is : %d",trace);  
     	
     	printf("\nBefore transposing the matrix: \n");
     	 for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf(" [%d][%d]: ", i, j);
            printf(" %d", a[i][j]);
            
        }printf("\n");
    }
    for( i = 0 ; i<row; i++){
    for(j = 0 ; j<col; j++){
    		transpose[j][i] = a[i][j];
    		}
    		}
    		
    printf("After transposing the matrix: \n");
    
    	 for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf(" [%d][%d]: ", i, j);
            printf(" %d", transpose[i][j]);
            
        }printf("\n");
    }

return 0;
}
