#include<stdio.h>
int fseries(int);
int main()
{
	int i;
	printf("First 25 digits of Fibonacci Series: ");
	
	for(i=1; i<=25; i++)
	{
		printf("%d\n", fseries(i));
	}
	return 0;
}

int fseries(int a)
{
	int sum;
	
	if(a==1 || a==2)
		return (1);
	
	else
	{
		sum=fseries(a-1)+ fseries(a-2);
		return sum;
	}
}