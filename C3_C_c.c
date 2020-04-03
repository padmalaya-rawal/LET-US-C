/* Any year is input through the keyboard. Write a program to determine whether 
the year is leap year or not. */

#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	
	if(year%100==0)
	{
		if(year%400==0)
		printf("Year is Leap");
		
		else
		printf("Year is not leap");
	}
	
	else if(year%4==0)
	printf("Year is leap");
	
	else 
	printf("Year is not leap");
	return 0;
}	