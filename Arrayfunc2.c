#include <stdio.h> 

int search(int arr[], int N, int x) 
{ 
	for (int i = 0; i < N; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 
void reverse(int arr[],int N){

	for(int i=0;i<N/2;i++){
		int temp=arr[i];
		arr[i]=arr[N-1-i];
		arr[N-1-i]=temp;
		
	}
	printf("the reverse of the array is  \n");
	for(int j=0;j<N;j++){
		printf("%d \n",arr[j]);
	}
}

void printDups(int arr[],int N){
printf("the duplicate values in the array are \n");
	for(int j=0;j<N;j++){
		for(int i=j+1;i<N;i++){
			if(arr[j]==arr[i])
			printf("%d \n",arr[i]);
		}
		
	}
}

int main(void) 
{ 
	int N;
	printf("enter the size of the array ");
	scanf("%d",&N);
	int arr[N];
	printf("enter all the array elements of size %d ", N);
	for (int i = 0; i < N; i++)  {
		scanf("%d", &arr[i] );
	}
	int x;
	printf("Enter the value to be searched  ");
	scanf("%d",&x); 
	
	int result = search(arr, N, x); 
(result == -1) ? printf("Element is not present in array"):  
         printf("Element is present at index %d", result); 
	
	reverse(arr,N);
	printDups(arr,N);
	
}

