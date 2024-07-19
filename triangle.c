#include<stdio.h>
#include<conio.h>

void main ()
{
	float base,height,area;
	
	printf("enter base of triangle:");
	scanf("%f",&base);
	
	printf("enter height of triangle:");
	scanf("%f",&height);
	
	area=base*height;
	printf("the area of the triangle is:%.2f\n",area);
	
}