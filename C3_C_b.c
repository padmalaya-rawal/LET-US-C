/* Any number is input through the keyboard. Write a program to find out whether
it is an odd or even number. */

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer: ");
	scanf("%d", &num);
	
	if(num==0)
	printf("This is Zero");
	
	else if(num%2==0)
	printf("Even number");
	
	else 
	printf("Odd number");
	
	return 0;
}	