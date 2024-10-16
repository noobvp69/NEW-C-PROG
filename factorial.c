#include<stdio.h>

int main(){

	int i,j,n;
	int fact=1;
	printf("Enter an integer: ");
        scanf("%d", &n);
        
        if(n<0){
        printf("Factorial of negative number doesn't exist.");}
        else{
	for(i=1; i<=n; i++){
		fact=fact*i;
		}
	printf("Factorial of %d is: %d",n,fact);
		}
	}
