#include<stdio.h>
int main()
{
	int i=1,temp=1,temp1,num1,num2;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	
	printf("Enter number 2: ");
	scanf("%d",&num2);
	
	while(i<=num2)
	{
		temp=temp*num1;
		i++;
	}
	
printf("Number 1 raised to the power of other: %d",temp);
return 0;
}	