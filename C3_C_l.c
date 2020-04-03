/* Given a point(x,y), write a program to find out if it lies on the x-axis, y-axis or origin. */

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the coordinates of the point: ");
	scanf("%d  %d", &x,&y);
	
	if(x==0)
		printf("Point lies on X-axis");
	
	else if(y==0)
		printf("Point lies on the Y-axis");
	
	else if(x==0 && y==0)
		printf("Point lies on the origin");

	else
		printf("Point neither lies on X-axis nor on Y-axis");
	return 0;
}	