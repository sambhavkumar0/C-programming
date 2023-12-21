#include<stdio.h>
void main(){
	int arr[5];
	int arr2[5];
	for (int i = 0; i <= 4; i++) {
  		scanf("%d", &arr[i]);
  		scanf("%d", &arr2[i]);
  		printf("\n \n");
	}
	int sum[5];
	for (int i = 0; i <= 4; i++) {
  	 sum[i]=arr[i]+arr2[i];
  	 printf("%d \n", sum[i]);
	}	
	
	
	char arr1[]={'a','b','c','d'};
	for (int i = 4; i >=0; i--) {
  	printf("%c\n", arr1[i]);
	}	
	
}
