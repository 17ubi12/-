#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#define SIZE 1024
char * str(char *, char *);
int main(){
	char *input1=(char *)malloc(sizeof(char)*SIZE);
	char *input2=(char *)malloc(sizeof(char)*SIZE);
	char *result;
	scanf("%s %s",input1, input2);
	result = str(input1, input2);
	printf("%s\n",result); 
	free(input1);
	free(input2);
	free(result);
	return 0;
}
char * str(char *str1,char *str2){
	char *result;
	int size1, size2, i;
	// str1의 사이즈 구하기
	size1=strlen(str1);
	// str2의 사이즈 구하기
	size2=strlen(str2);
	// make C
	result=(char *)malloc(sizeof(char)*(size1+size2)+1);
	// str1 붙이기
	for(i=0; str1[i]!='\0';i++)
		result[i]=str1[i];
	// str2 붙이기
	for(i=0; str2[i]!='\0';i++)
		result[i+size1]=str2[i];
	result[i+size1]='\0';
	// return
	return result;
}