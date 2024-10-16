#include <stdio.h>

int main() {
	int i,size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements : ");
	for( i =0; i<size; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	int sum = 0;
	for(i=0;i<size;i++){
		sum += arr[i] + arr[i+1];
		i++; 
	}
	printf("Sum of the elements in the array is %d\n",sum);
    
return 0;
}
