/*Check whether a given imput is vowel or consonant */

#include<stdio.h>
void main(){
	char c;
	printf("enter the character");
	scanf("%c",&c);
	
	if(c=='a' || c=='e'||c=='o'||c=='i'||c=='u'){
		printf("vowel\n");
	}
	else{
		printf("consonant\n");
	}
	
}
