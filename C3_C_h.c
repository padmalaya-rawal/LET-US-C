/*Write a program to finf=d the absolute value of the number entered through the keyboard. */

#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	if(num<0)
	{
		num=num*(-1);
		printf("Absolute value of the number is %d",num);
	}

	else
	printf("Absolute value of the number is %d", num);
	return 0;
}	