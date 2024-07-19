#include<stdio.h>
#include<conio.h>

void main()
{
	float subject1,subject2,subject3,average;
	float per;
	
	printf("enter the marks of subject1=");
	scanf("%f",&subject1);
	
	printf("enter the marks of subject2=");
	scanf("%f",&subject2);
	
	printf("enter the marks of subject3=");
	scanf("%f",&subject3);
	
	average=subject1+subject2+subject3;
	per = average*100/300;
	
	printf("average marks:%f\n",per);
	
}
