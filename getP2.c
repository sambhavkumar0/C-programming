#include<stdio.h>
#include<unistd.h>
int main(){
for(int i=0;i<3;i++){
	
	int pid=fork();
	if(pid==-1){
		printf("Error ");
		return 1;
	}
	else if(pid>0){
		printf("child %d from parent process : %d",getpid(),getppid());
		break;
	}
	else{
		printf("Child process : %d",getpid());
	}
}
return 0;
	
}
