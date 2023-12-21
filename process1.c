#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){

	for(int i=0;i<4;i++){
		fork();
		
	}	
	printf("Process ID: %d , parent ID: %d \n", getpid(),getppid());
	getchar();
}

