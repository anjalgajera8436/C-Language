#include<stdio.h>
#include<conio.h>

void main()
{
	float redius,area,pi=22/7;
	
	printf("enter the reaius of the circle:");
	scanf("%f",&redius);
	
   area =pi*redius*redius;
   printf("area=%.2f",area);	
}