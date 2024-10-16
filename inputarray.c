#include<stdio.h>
int main(){

int i,j,size;
printf("Enter the size: ");
scanf("%d",&size);
int arr[size];
for(i=0;i<size-1;i++){
	printf("enter element no %d:",i);
	scanf("%d",&arr[i]);
	}

for(j=0;j<size-1;j++)
	printf("%d ",arr[j]);

return 0;
}
