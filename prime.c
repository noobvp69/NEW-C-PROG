#include<stdio.h>

int main(){

int i,n,c=0;
printf("Enter the number to check: ");
scanf("%d",&n);
 for(i=1;i<=n;i++){
 	if(n%i==0){
 		c++;
 }}
 if(c==2){
 printf("It is a prime number");
 }else if (n==1)
 printf("It is neither composite nor a prime number.");
  else
  printf("It is not a prime number.");
	
}


