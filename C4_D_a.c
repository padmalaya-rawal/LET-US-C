/*Any year is input through the keyboard, write a program to determine whether the year is leap or not.
Use logical operators && and ||. */

#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);
	
	if((year%100==0 && year%400==0)||(year%100!=0 && year%4==0))
		printf("Leap year");
		
	else
		printf("Year is not leap");
	return 0;
}	