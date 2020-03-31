#include<stdio.h>
int ly(int);
int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	
	ly(year);
	return 0;
}

int ly(int year)
{
	if(year%100==0)
	{
		if(year%400==0)
		printf("Leap year");
	
		else
		printf("Not a leap year");
	}
	
	else if(year%4==0)
	printf("Leap year");

	else 
	printf("Not a leap year");
}