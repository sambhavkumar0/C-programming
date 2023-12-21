#include<stdio.h>
#include<stdlib.h>  
#include<string.h>   
void main(){
	char str1[30],str2[30];
	printf("enter two strings str1 and str2 \n");
	
	fgets(str1,30,stdin);
	scanf("%s",str2);
	int r1=strcmp(str1,str2);
	int r2=strncmp(str1,str2,2);
	int r3=strcasecmp(str1,str2);
	char st[]="GOODBYE";
	char str[]="BYE";
	char * ptr=strstr(st,str);	
	printf("%ld",ptr-st);
	printf("%d %d %d ",r1,r2,r3);
	
	char str5[]="http.google.com";
	char ch='m';
	char *ptr1=strchr(str5,ch);
	printf("%s",ptr1);
	

	}

