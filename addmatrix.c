#include<stdio.h>

int main(){
	
	int i,j;
	
	int arr1[2][2], arr2[2][2], res[2][2];
	
	// inputting matrix -1st
		printf("1st matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
			printf("\n");
		}
	}
	// for 2nd matrix
	printf("2nd matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
			printf("\n");
		}
	}
	// addition
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			res[i][j] = arr1[i][j]+arr2[i][j];
			
		}
	}
	// printing the resultant matrix
	printf("Resultant matrix: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("[%d][%d] = %d ",i,j,res[i][j]);
		
		
			
		}	printf("\n");
	}
	
return 0;
}
