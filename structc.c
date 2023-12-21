#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
	char[50] name;
	int roll;
}

typef struct{
	student st;
	
	
	}
void main(){
	struct student s1;
	s1.name("%s","sam");
	s1.roll("%d",2141013199);
	printf("the name and rill no.  is %s %d ",s1.name,s1.roll);
}
