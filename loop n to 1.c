#include<stdio.h>
#include<conio.h>

void main ()
{
	int i=1,n;
	
	printf("enter n :");
	scanf("%d",&n);
	
	while(n>=i)
	{
	      if(n%2==1)	
	      {
	      	printf("%d\n",n);
		  }
		  n--;
	}
}
