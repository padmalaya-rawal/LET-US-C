/*Wriet a program to check whether a triangle is valid or not, when the angles of the triangle are input
through the keyboard. A triangle is valid if the sum of all the angles is equal to 180 degrees. */

#include<stdio.h>
int main()
{
	int a1,a2,a3,sum;
	printf("Enter first angle: ");
	scanf("%d", &a1);
	
	printf("Enter second angle: ");
	scanf("%d", &a2);
	
	printf("Enter third angle: ");
	scanf("%d", &a3);
	
	sum=a1+a2+a3;

	if(a1==0 || a2==0 || a3==0)
		printf("Traingle is invalid, beacause in triangle angle can not be ZERO.");

	else if(sum>180 || sum< 180)
		printf("Triangle is invlaid, beacause sum of all the angles must be 180");
		
	else if(sum==180)
		printf("Triangle is valid");
		
	return 0;
}	