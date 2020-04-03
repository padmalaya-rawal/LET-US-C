/*Given the coordinates of center of a circle and its radius, write a program that will determine 
whether the point lies inside the circle, on the circle or outside the circle. */

#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,x1,y1,d;
	printf("Enter the coordinates of center of the circle: ");
	scanf("%f %f",&x,&y);
	
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	
	printf("Enter the coordinates of the point: ");
	scanf("%f %f", &x1,&y1);
	
	d= sqrt((pow(x-x1,2)) + (pow(y-y1,2))) ;
	
	if(d==r)
		printf("Point lies on the circle");
		
	else if(d<r)
		printf("Point lies inside the circle");
		
	else if(d>r)
		printf("Point lies outside the circle");
		
	return 0;
}	
	
	