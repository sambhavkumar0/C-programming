#include<stdio.h>
int main(){
char *s[]={"ice","green","come","please"};
char **ptr[]={s+3,s+2,s+1,s};
char ***p=ptr;
printf("%s",**++p);
printf("%s",*--*++p+1);
}
