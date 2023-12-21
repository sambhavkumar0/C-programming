#include <stdio.h> 

void printfreq(int arr[],int N){
printf("the duplicate values in the array are \n");
	int visited[N];
	for(int i=0;i<N;i++){
		int count=1;
		for(int j=i+1;j<N;j++){
			if(arr[i]==arr[j]){
				count++;
				visited[i]=;
				}
				
				
		}
		
		
	
	if(visited[i]!=0){
			visited[i]=count;
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
	
	printfreq(arr,N);
	}
