/*If three sides of triangle are input through the keyboard, write a program to check whether the triangle is 
isosceles, equilateral, scalene or right angled triangle. */

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
	
	if(s1==0 || s2==0 || s3==0)
		printf("Side of triangle can not be zero");
	
	else if((s1>s2 && s1>s3 && (s1*s1)==(s2*s2)+(s3*s3))||(s2>s1 && s2>s3 && (s2*s2)==(s1*s1)+(s3*s3)) || (s3>s1 && s3>s2 && (s3*s3)==(s1*s1)+(s2*s2)))
		printf("Right angled triangle");
	
	else if(s1==s2 && s2==s3)
		printf("Equilateral Triangle");
		
	else if(s1==s2 || s2==s3 || s3==s1)
		printf("Isosceles Triangle");
		
	else 
		printf("Scalene Triangle");
	
	return 0;
}	