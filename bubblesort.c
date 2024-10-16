#include<stdio.h>

int main(){

int i,j,size,x,y,temp;

printf("Enter the size: ");
scanf("%d",&size);		
int arr[size];


 for ( i = 0; i<size; i++){
    	printf("Enter the element no %d:",i);
    	scanf("%d",&arr[i]);}
    	
printf("UnSorted Array: {"); 
 for ( int k = 0; k<size; k++){
    	printf("%d ",arr[k]);
    	}
    	printf("}");
    	
    	
    	
for (i=0; i<size-1; i++){
	for(j=0;j<size-i-1;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
				  }
		           }
		       }

printf("\n\nSorted Array: {"); 
 for ( int k = 0; k<size; k++){
    	printf("%d ",arr[k]);
    	}
    	printf("}");
    	}
  
