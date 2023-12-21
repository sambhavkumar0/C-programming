
#include<stdio.h>
int main(){
   int arr[2][3];
   int transpose[3][2];
   int i, j,r,c;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   printf("The transpose of a that array is:\n");
   for (int i = 0; i < r; ++i){
  	for (int j = 0; j < c; ++j) 
  	{
    transpose[j][i] = a[i][j];
  }}

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
   
   return 0;
}
