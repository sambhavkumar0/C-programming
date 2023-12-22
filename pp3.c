#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>

void exitFunction(){
	printf("Inside exit Function\n");
}

int main(){
	atexit(exitFunction);
	printf("Inside Main \n");
	printf("Returning from Main \n");
	return 0;
	printf("This line will not be printed ");
}
