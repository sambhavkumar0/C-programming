#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void func(char string1[],int size1){
	printf("te string is : ");
	printf("%s",string1);
	printf("%d",size1);
}
void func1(char* string2,int size2){
	printf("te string is : ");
	printf("%s",string2);
	printf("%d",size2);
}

void main(){
	char str[]={'C','S','E',' '};
	char str1[]="CSE";
	printf("%s %s",str,str1);
	char str2[50];
	
	int size=50;
	printf("\n Enter a string2 and string3 ");
	scanf("%s ", str2);
	printf("%s",str2);
	
	char str3[50];
	
	fflush(stdin);
	fgets(str3,size,stdin);
	printf("%s",str3);
	
	char* ptr=str;
	while(*ptr!=' '){
		printf("%c",*ptr);
		ptr++;
	}
	
	char string1[50];
	int size1=50;
	fgets(string1,size1,stdin);
	func(string1,size1);
	
	char string2[50];
	int size2=50;
	fgets(string1,size1,stdin);
	func(string2,size2);
	
	
	
}
