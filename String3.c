#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void count( char* , int length);
void reverse(char*,int length);
void count( char *str ,int length)
{	
	int count=0,characters=0;
	for(int i=0;i<length;i++){
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' ||str[i]=='I'||str[i]=='i'||str[i]=='o'||str[i]=='O'||str[i]=='U'||str[i]=='u'){
			count++;
		}
		
		else{
			characters++;
		}
		
	}
	printf("the total numbers of vowels and consonants characters are %d %d \n", count,characters );
}

void reverse(char* str,int length){
char new[length];
int counter=0;
	for(int i=length;i>=0;i--){
		new[counter]=str[i];
		counter++;
	
}
	printf("the reverse is %s \n",new);

}
void main(){
	char str[]={"aeioubbccddbbccdd"};
	 int length = strlen(str); 
	//count(str,length);
	reverse(str,length);
	
}
