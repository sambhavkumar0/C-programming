#include<stdio.h>
void main(){
	int mask=1,n,pos;
	printf("enter a no. and a position :");
	scanf("%d %d",&n,&pos);
	int bitmask=mask<<pos;
	int newmask=~bitmask;
	int res=n&newmask;
	printf("%d",res);
}
