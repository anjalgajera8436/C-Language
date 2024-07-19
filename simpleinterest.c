#include<stdio.h>
#include<conio.h>

void main ()
{
	float principal,rate,time;
	
	printf("enter principal amount:");
	scanf("%f",&principal);
	
	printf("enter interast rate:");
	scanf("%f",&rate);
	
	printf("enter time:");
	scanf("%f",&time);
	
	float intrest=principal*rate*time;
	
	printf("simpleinterest %.2f",intrest);
}