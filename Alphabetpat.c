#include<stdio.h>

int main(){

int i,j;
char input,alphabet='A';
printf("Enter the last alphabet : ");
scanf("%c",&input);

for(i=0; i<=(input-'A'); i++){
for(j=0; j<=i; j++)
printf("%c",alphabet);
++alphabet;
printf("\n");
}
}

