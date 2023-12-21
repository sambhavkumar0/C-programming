#include<stdio.h>
void main(){
	int n1,n2;
	printf("enter the value of n1 and n2 :\n");
	scanf("%d %d", &n1,&n2);
	char ch;
	printf("enter + or - :");
	scanf("%c", &ch);
	int res =(ch == '+')?(n1+n2):(n1-n2);
	printf("%d",res);
}
