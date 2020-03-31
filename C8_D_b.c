#include<stdio.h>
int power(int ,int);
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	power(a,b);
	return 0;
}

int power(int x, int y)
{
	int pow=1,i;
	for(i=1; i<=y; i++)
	{
		pow=pow*x;
	}
	printf("a raised to the power b: %d",pow);
}