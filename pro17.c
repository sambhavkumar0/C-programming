#include<stdio.h>
void main(){
	int n,pos,mask=1;
	printf("enter a number and position \n");
	scanf("%d %d",&n,&pos);
	int bitmask=1<<pos;
	int res=n|bitmask;
	int bit=pos>>res;
	printf("%d", bit);
}
