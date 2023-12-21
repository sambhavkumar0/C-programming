#include<stdio.h>
#include<string.h>
struct child{
	int a;
	float b;
};
struct parent{
	char ch;
	struct child c;
};
void main(){
	struct parent p={25,5.5,'A'};
	printf("%d \n",p.c.a);
	printf("%f \n",p.c.b);
	printf("%c",p.ch);
	
	
}
