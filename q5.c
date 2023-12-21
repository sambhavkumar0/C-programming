#include<stdio.h>
/*int main(void){
	auto int i,j;
	printf("\n%d %d",i,j);
}*/
int main(void){
	auto int i=1;
	{
		auto int i=2;
		{
			auto int i=3;
			printf("\n%d",i);
		}
		printf("\n%d",i);
	}
	printf("\n%d \n",i);
}
