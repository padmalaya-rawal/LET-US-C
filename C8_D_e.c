#include<stdio.h>
int pf(int);
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	pf(num);
	return 0;
}

int pf(int num)
{
	int i=2,temp,rem;
	while(i<=num-1)
	{
		for(;;)
		{
			temp=num;
			rem=num%i;
			if(rem==0)
			{
				printf("\t%d",i);
				temp=num/i;
			}
			
			else 
			break;
		} 
		i++;
	}
			
}	