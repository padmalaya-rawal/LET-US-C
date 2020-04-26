#include<stdio.h>
int dsum(int);
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("Sum is %d",dsum(num));
	return 0;
}

int dsum(int a)
{
	int temp,sum,rem;
	 
	temp=a;   		//a=12345
	
	if(temp>=9)
	{
		rem= temp%10;   //rem=5
		sum=rem + dsum(temp/10);		//sum=5
	}
	
	else
	{
		temp=a;
		sum=rem+temp;
	}
	return sum;
}
	
	