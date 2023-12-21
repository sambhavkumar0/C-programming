//find the gcd od two numbers
#include<stdio.h>
void main(){
 int n1,n2,gcd;
 printf("enter two numbers : ");
 scanf("%d %d",&n1,&n2);
 for(int i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    
}
