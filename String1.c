#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void ToUp ( char* );
void ToUp ( char *p )
{
while( *p )
{
*p=toupper( *p );
p++;
}
}

void main(){
	char str[30];
	fgets(str,30,stdin);
	int l=strlen(str);
	printf("%d \n",l);
	
	//strcpy copies the string from s2 to s1
	char s1[20];
	char s2[10]="abc";
	int result=strcmp(s1,s2);
	printf("%d \n",result);
	strcpy(s1,s2);
	result=strcmp(s1,s2);
	printf("%d \n",result);
	
	printf("\n %s",s1);
	
	
	//string concatenation
	printf("enter two strings");
	char s3[4];
	char s4[4];
	scanf("%s %s",s3,s4);
	strcat(s3,s4);
	puts(s3);
	
	//convert string to uppercase
	printf("upper case of str \n");
	ToUp(str);
	printf( "%sn", str);

	
	
}

