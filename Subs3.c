#include<stdio.h>
#include<string.h>

struct parent{
	int a;
	
struct child{
	int a;
	float b;
	
};

	
};
void main(){
	struct parent p={25,55,'A'};
	struct parent *ptr=&p;
	printf("%d \n",ptr->c.a);
	
	
	
}
