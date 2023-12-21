#include<stdio.h>
#include<stdbool.h>

double area(double radius){

	double res=3.14*radius*radius;
	return res;
}

double circum(double radius){
	double ret=2*3.14*radius;
	return ret;
}
void main(){
	double radius;
	scanf("%lf", &radius);
	double e=area(radius);
	double f=circum(radius);
	printf("the circumference of the circle is %.2lf \n",f);
	
	printf("the area of the circle is : %.2lf \n", e);
}
