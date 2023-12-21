#include<stdio.h>
void increment(void);
int main(){
	increment( );
	increment( );
	increment( );
}
void increment(void){
	auto int i=1;
	printf("%d\n",i);
	i=i+1;
}
