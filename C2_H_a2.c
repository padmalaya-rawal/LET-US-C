/* If a five digit number is entered through the keyboard, write a program to
calculate sum of its digit */

#include<stdio.h>
int main()
{
	int num,rem,sum,temp;
	printf("Enter a five digit number= ");
	scanf("%d", &num);
	
	temp=num;
	
	rem=temp%10;
	temp=temp/10;
	sum=rem;
	printf("\n%d", rem);
	
	rem=temp%10;
	temp=temp/10;
	sum=sum+rem;
	printf("\n%d", rem);	
	
	rem=temp%10;
	temp=temp/10;
	sum=sum+rem;
	printf("\n%d", rem);
	
	rem=temp%10;
	temp=temp/10;
	sum=sum+rem;
	printf("\n%d", rem);
	
	rem=temp%10;
	temp=temp/10;
	sum=sum+rem;
	printf("\n%d", rem);
	
	printf("\nSum of all digits of 5 digit number is: %d", sum);
	return 0;
}	