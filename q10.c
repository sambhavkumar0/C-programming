//use static storage class on;y if you want the value of variable to persist between diff function calls.

//use register storage class for only those variables that are being used very often in a program.
#include<stdio.h>
int val=10;
int main(void){
	int val=20;
	{
		extern int val;
		printf("global variable val=%d\n", val);
	}
	printf("local variable val=%d\n",val);
	return 0;
}
