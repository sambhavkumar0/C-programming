#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
void main(){
	pid_t childpid;
	childpid=fork();
	if(childpid==0){
		printf("In Child ");
	}
	else{
		//wait(NULL);
		printf("In parent ");
	}
}
