#include<stdio.h>
int main()
{
	int ch,num,i,temp,fact=1;
	while(1)
	{
		printf("\n\nMENU: ");
		printf("\n1. Factorial of the number");
		printf("\n2. Prime or not");
		printf("\n3. odd or even");
		printf("\n4. Exit\n\n");
		printf("Entered choice: ");
		scanf("%d",&ch);
		
		if(ch==4)
			break;
		
		switch(ch)
		{
			case 1:
				printf("***********************\n");
				printf("*FACTORIAL OF A NUMBER*\n");
				printf("***********************\n");
				printf("Enter number: ");
				scanf("%d",&num);
				
				for(i=1; i<=num; i++)
					fact=fact*i;
				
				printf("Factorial of the number:");
				printf("%d",fact);
				
				break;
			
			case 2:
				printf("**************\n");
				printf("*PRIME NUMBER*\n");
				printf("**************\n");
				printf("Enter number: ");
				scanf("%d",&num);
				
				for(i=2; i<num; i++)
				{
					temp=num%i;
					if(temp==0)
					{
						printf("\nNot a PRIME number");
						break;
					}
				}
					
				if(temp!=0)
				printf("\nPRIME number");
				break;
			
			case 3:
				printf("********************\n");
				printf("*ODD OR EVEN NUMBER*\n");
				printf("********************\n");
				printf("Enter number: ");
				scanf("%d",&num);
				
				if(num%2==0)
					printf("\nEVEN number");
				
				else
					printf("\nODD number");
			
				break;
		
			case 4:
				break;
		}
		

	}	
return 0;
}	