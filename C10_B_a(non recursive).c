#include<stdio.h>
int sum(int);
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("Sum is %d",sum(num));
	return 0;
}

int sum(int a)
{
	int temp,sum,rem;
	 
	temp=a;   		//a=12345
	rem= temp%10;   //rem=5
	sum=rem;		//sum=5
	
	temp=temp/10;   //temp=1234
	rem=temp%10;	//rem=4
	sum=sum+rem;	//sum=5+4
	
	temp=temp/10;	//temp=123
	rem=temp%10;	//rem=3
	sum=sum+rem;	//sum=5+4+3
	
	temp=temp/10;   //temp=12
	rem=temp%10;	//rem=2
	sum=sum+rem;	//sum=5+4+3+2
	
	temp=temp/10;	//temp=1
	rem=temp;		//rem=1
	sum=sum+rem;	//sum=5+4+3+2+1

	return sum;
}
	
	