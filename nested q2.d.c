#include<stdio.h>
#include<conio.h>

void main ()
{
    int a,b,c,d;
	
   printf("enter a vlaue:");
   scanf("%d",&a);
   
   printf("enter b vlaue:");
   scanf("%d",&b);
   
   printf("enter c vlaue:");
   scanf("%d",&c);
   
   printf("enter d vlaue:");
   scanf("%d",&d);
   
   if (a>b)
   {
   	  if(a>c)
    	{
   		   if(a>d)
   		   {
   		   	printf("max=a");
		   }
		   else
		   {
		   	printf("max=d");
		   }
		   
     	}
     	else
     	{
          printf("max=c");
	    }
   }
   else
   {
   	printf("max=b");
   }
   	
   	
   	
   	
   	
}
