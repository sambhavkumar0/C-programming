#include<stdio.h> 
struct node{
	int a;
	struct node*link;
};
void main(){
	struct node n1;
	n1.a=10;
	struct node n2;
	n1.link=&n2;
	n2.a=20;
	struct node n3;
	n2.link=&n3;
	n3.a=10;
	n3.link=NULL;
	
	printf("%d",n1.a);
	printf("%d",n1.link->a);
	
}
