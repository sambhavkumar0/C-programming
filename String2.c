#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void count( char* , int length);
void count( char *str ,int length)
{	
	int count=0,digits=0,characters=0;
	for(int i=0;i<length;i++){
		if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
			count++;
		}
		else if(str[i]>='0' && str[i]<='9'){
			digits++;
		}
		else{
			characters++;
		}
		
	}
	printf("the total numbers of alphabets , digits ad special characters are %d %d %d \n", count,digits,characters );
}

void main(){
	char str[]={"AbeD1245#@"};
	 int length = strlen(str); 
	count(str,length);
	
	
}
