/*Given three points (x1,y1),(x2,y2) and (x3,y3),write a program to to check if all the three
points fall on one straight line. */

#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,area;
	printf("Enter first point: ");
	scanf("%d" "%d",&x1,&y1);
	
	printf("Enter second point: ");
	scanf("%d" "%d",&x2,&y2);
	
	printf("Enter third point: ");
	scanf("%d" "%d",&x3,&y3);
	
	area=(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;
	
	if(area==0)
	printf("Points are on the straight line");
	
	else
	printf("Points are not on the straight line");
	
	return 0;
}	