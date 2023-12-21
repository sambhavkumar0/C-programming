#include<stdio.h>
#include<string.h>

char maxchar(char str[]){
	int count[256]={0};
	int length=strlen(str);
	for(int i=0;i<length;i++){
		count[(int)str[i]]++;
		
	}
	char maxChar;
	int maxCount=0;
	for(int i=0;i<length;i++){
		if(count[(int)str[i]]> maxCount){
			maxCount=count[(int)str[i]];
			maxChar=str[i];
					
		}
	}
	printf("max frequency is : %d \n",maxCount);
	return maxChar;
}

int main(){
	char str[]="AAGJGHYTKLAJBJSHAJKSHKHJHHJHJHJJJJJJJJ";
	printf("max occuring character  %c\n" , maxchar(str));
}
