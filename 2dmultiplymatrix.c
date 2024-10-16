#include<stdio.h>

int main(){
	
	int i,j,k;
	
	int arr1[2][2], arr2[2][2], res[2][2];
	
	// inputting matrix -1st
		printf("Input for 1st matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
			
		}//printf("\n");
	}
	// for 2nd matrix
	printf("Input for 2nd matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		
		}//printf("\n");
	}
	
	printf("\n1st Matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ",arr1[i][j]);
		
		
			
		}	printf("\n");
	}
	//printing 2nd matrix
	printf("2nd Matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ",arr2[i][j]);
		
		
			
		}	printf("\n");
	}
	// addition
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			res[i][j] = 0;
			for(k=0;k<2;k++){
				res[i][j] +=arr1[i][k]*arr2[k][j];
			}
		}
	}
	// printing the resultant matrix
	printf("Printing the result: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = %d ",i,j,res[i][j]);
		
		
			
		}	printf("\n");
	}
	
return 0;
}
