#include<stdio.h>

int main(){
	FILE *fptr;
	fptr=fopen("filename.txt","w");
	fprintf(fptr,"Hello Everyone!");
	fclose(fptr);
	char myString[100];
	fptr=fopen("filename.txt","r");
	if (fptr != NULL){
		while (fgets(myString,100,fptr)){
		printf("%s",myString);
		}}
	else{
		printf("not able to open the file.");
		}
	fclose(fptr);
}
	
