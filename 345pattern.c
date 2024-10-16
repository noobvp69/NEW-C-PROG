#include<stdio.h>
int main(){
int i,j=0,rows,num=0,spc=0,count;
	printf("Enter the rows:");
	scanf("%d",&rows);
	for(i=1; i<+rows;i++){
		for(spc=1;spc<=rows-i;spc++){
		printf(" ");
		count++;
		}
		while(j!=2*i-1){
		if(count<=rows-1)
		{printf("%d",i+j);
		++count;
		}
		else
		{
			num++;
			printf("%d",(i+j-2*num));
			}
			++j;
			}
			num=count=j=0;
			printf("\n");
			}return 0;
			}
			
