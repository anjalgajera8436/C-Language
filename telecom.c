#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n\n");
	
	printf("enter your language");
	scanf("%d",&choice);

	
	switch(choice);
  {
	
		case1 :
			printf("press 1 for internet recharege\n");
			printf("press 2 for top-up recharege\n");
			printf("press 3 for special recharge\n\n");
			 
			
			printf("enter your choice");
			scanf("%d",&choice);
	 		
	  switch(choice)
	{
	 
	   case  1:
	     printf("internet recharge successful\n");
	   break;
	   case 2:
	     printf("top-up recharge successful\n");
	   break;
	   case 3:
	     printf("special recharge successful\n");
	   break;
       }
        
	   case2:
        	printf("internat reacharge ke liye press 1 dabaiye\n");
        	printf("internat reacharge ke liye press 2 dabaiye\n");
            printf("internat reacharge ke liye press 3 dabaiye\n\n");
            
            printf("apna recharge plan hogaya:");
            scanf("%d",&choice);
            
            switch(choice)
            {
            	case 1:
            		printf("internet recharge successful\n");
            	break;
            	case 2:
            		printf("top-up recharge successful\n");
            	break;
            	case 3:
            	    printf("soecial recharge successful\n");
			}
		case3:
			printf("internet recharge mate 1 dabavo");
			printf("top-up recharge mate 2 dabavo");
			printf("special recharge mate 3 dabavo");
			
			printf("tamaro recharge plane pasand karo:");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1:
					printf("internet recharge success thay gayu.....");
					break;
				case 2:
				    printf("top-up recharge success thay gayu.....");
				    break;
				case 3:
				    printf("special recharge success thay gayu....");	
			}
        
     }
	     
      
	   
  
    		
     
    	
	
	  
    
}
