/*If the value of angle is input through the keyboard, Write a program to print all its trigonometric ratios*/

#include<stdio.h>
#include<math.h>
int main()
{
	float angle,angle2;
	printf("enter the angle in radians: ");
	scanf("%f", &angle);
	
	printf("\nAngle in Radians:");
	printf("\nSine of the angle is %f", sin(angle));
	printf("\nCosine of the angle is %f", cos(angle));
	printf("\nTangent of the angle is %f", tan(angle));
	printf("\nCosecant of the angle is %f", 1/sin(angle));
	printf("\nSecant of the angle is %f", 1/cos(angle));
	printf("\nCotangent of the angle is %f", 1/tan(angle));	
	

	return 0;
}