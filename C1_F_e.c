/* The length and breadth of a rectangle and radius of circle are 
input through the keyboard. Write a program to calculate the area
and perimeter of rectangle, and area and circumference of circle*/

#include<stdio.h>
int main()
{
	float len,bre,rad,ac,ar,pr,cc;
	
	printf("Enter length of rectangle= ");
	scanf("%f", &len);
	
	printf("Enter breadth of rectangle= ");
	scanf("%f", &bre);
	
	printf("Enter radius of circle= ");
	scanf("%f", &rad);
	
	ar= len*bre;
	ac= 3.14*rad*rad;
	cc= 2*3.14*rad;
	pr= 2*(len+bre);
	
	printf("\nArea of rectangle= %f", ar);
	printf("\nArea of circle= %f", ac);
	printf("\nCircumference of circle= %f", cc);
	printf("\nPerimeter of rectangle= %f",pr);
	
	return 0;
}	