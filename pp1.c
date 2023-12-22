#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	for(int i=0;i<50;i++){
		printf("i = %d\n",i);
		sleep(2);
	}
	
}
