#include<stdio.h>
union Student{
	int Roll;
	char Section;
	float marks;
	
}
main(){
	struct Student s1;
	s1.Roll=30;
	s1.Section='a';
	s1.marks=89.5; 
	printf("%d",s1.Roll);
	printf("%c",s1.Section);
	printf("%f",s1.marks);
}
