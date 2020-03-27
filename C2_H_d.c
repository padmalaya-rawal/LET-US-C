/*Write a program to receive Cartesian cooordinates (x,y) of a point and convert them into
polar coordinates */

#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,f;
	printf("enter cartesian coordinates: ");
	scanf("%f ,%f ",&x,&y);
	
	r=sqrt((x*x)+(y*y));
	f=atan(y/x);
	
	printf("Coordinates in polar form(in radians): %f,%f",r,f);
	return 0;
}