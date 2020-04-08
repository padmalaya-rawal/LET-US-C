/*Write a program to determine the greatest of three numbers entered through the keyboard.
using conditional operator. */

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	printf("Enter number 3: ");
	scanf("%d", &num3);
	
	if(num1>num2 ? (num1>num3 ? printf("Number 1 is greatest") : printf("Number 3 is greatest")) : (num2>num3 ? printf("Number 2 is the greatest") : printf("Number 3 is greatest")))
		
	return 0;
}