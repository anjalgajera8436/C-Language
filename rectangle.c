#include<stdio.h>
#include<conio.h>

void main()
{
	float length,width,area;
	printf("enter the length of rectangle:");
	scanf("%f",&length);
	
	printf("enter the width of rectangle:");
	scanf("%f",&width);
	
	area=length*width;
	printf("the area of the rectangle is:%.2f\n",area);
	
}