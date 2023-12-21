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
	struct parent p={'A',25,5};
	printf("%c",p.ch);
	printf("%d",p.c.a);
	printf("%f",p.c.b);
	
	
}
