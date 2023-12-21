#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,sum=0;
	scanf("%d",&n);
	int* ptr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n ;i++){
	scanf("%d",(ptr+i));
	sum+=*(ptr+i);
	
	}
	int n2;
	printf("enter extra space \n");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2);
	for(int j=n;j<n2;j++){
		scanf("%d",(ptr+j));
		sum+=*(ptr+j);
	}
	printf("%d",sum);
	
	 
}

