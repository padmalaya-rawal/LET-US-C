/* If three sides of triangle are entered through the keyboard, write a program to check whether the triangle is valid or not.
A triangle is valid if the sum of two sides is greater than the largest of three side. */

#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter first side: ");
	scanf("%d", &s1);
	
	printf("Enter second side: ");
	scanf("%d", &s2);
	
	printf("Enter third side: ");
	scanf("%d", &s3);
	
	if((s1+s2>s3 && s3>s1 && s3>s2)|| (s2+s3>s1 && s1>s2 && s1>s3) || (s3+s1>s2 && s2>s1 && s2>s3)) 
		printf("Traingle is valid" );
		
	else
		printf("Invalid triangle");
		
	return 0;
}	