#include<stdio.h>
void display(int n);
void display1(int *n);
void display(int n){
  		printf("%d \n",n);
  	}
  	
void sum(int arr[],int n){
int sum=0;
	for (int i = 0; i < n; i++) {
  		sum+=arr[i];
  	}
  	printf("%d",sum);
}
  	
void display1(int *n){
  		printf("%d \n",*n);
  	}
void main(){
	int n;
	printf("enter the size of the array  ");
	scanf("%d",&n);
	int arr[n];
	
	for (int i = 0; i < n; i++) {
  		scanf("%d", &arr[i]);
  	}
  	printf("with pointer \n ");
  	for (int i = 0; i < n; i++) {
  		display(arr[i]);
  	
  	}
  	printf("with * operator \n");
  	for (int i = 0; i < n; i++) {
  		display1(&arr[i]);
  	}
  	printf("with base address pointer \n");
  	sum(arr,n);
  	
  	
  	
	}
