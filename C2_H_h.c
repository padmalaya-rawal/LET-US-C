/* Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D*/

#include<stdio.h>
int main()
{
	float locC,locD,temp;
	printf("Enter the value of number 1: ");
	scanf("%f", &locC);
	
	printf("Enter the value of number 2: ");
	scanf("%f", &locD);
	
	temp=locC;
	locC=locD;
	locD=temp;
	
	printf("\nNumber after interchanging:");
	printf("\nNumber 1: %f",locC);
	printf("\nNumber 2: %f",locD);
	
	return 0;
}	