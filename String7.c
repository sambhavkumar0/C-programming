#include<stdio.h>
#include<string.h>

void substr(char str[]){
	char sub[100]={0};
	int count=0,position=0,length=0;
	scanf("length and position %d %d ",&length,&position);
	while(count<length){
		sub[count]=str[position+count-1];
		count++;
		}
		sub[count]=' ';
		
		printf("%s",sub);
}

int main(){
	char str[]="AAGJGHYTKLAJBJSHAJKSHKHJHHJHJHJJJJJJJJ";
	substr(str);
}
