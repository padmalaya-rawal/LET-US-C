#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	fact(num);
	return 0;
}

int fact(int num)
{
	int fact=1,i;
	{
		for(i=1; i<=num; i++)
			fact=fact*i;
		
		printf("factorial of the number is %d", fact);
	}
}