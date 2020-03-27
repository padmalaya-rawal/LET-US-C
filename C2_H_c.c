/*If lengths of three sides of triangle is input through the keyboard, write a program to calculate
the area of triangle */

#include<stdio.h>
#include<math.h>
int main()
{
	float s,s1,s2,s3,area;
	printf("Enter first side: ");
	scanf("%f", &s1);
	
	printf("Enter second side: ");
	scanf("%f", &s2);
	
	printf("Enter third side: ");
	scanf("%f", &s3);
	
	s=(s1+s2+s3)/2;
	area= pow((s*(s-s1)*(s-s2)*(s-s3)),0.5);
	
	printf("area of triangle is %f", area);
	
	return 0;
}	