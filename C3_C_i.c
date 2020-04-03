/* Given the length and bredth of the rectangle,write a program to find whether the area of the rectangle 
is greater than its perimeter. For example, the area of the rectangle with length=5 and bredth=4 is greater 
than its perimeter. */

#include<stdio.h>
int main()
{
	int len,bre,peri,area;
	printf("Enter the length of the rectangle: ");
	scanf("%d", &len);
	
	printf("Enter the breadth of the rectangle: ");
	scanf("%d", &bre);
	
	area=len*bre;
	printf("\nArea of the rectangle: %d",area);
	
	peri=2*(len+bre);
	printf("\nPerimeter of the rectangle: %d",peri);
	
	if(area>peri)
		printf("\nArea is greater than its perimeter");
		
	else if(area==peri)
		printf("\nArea and perimeter are equal");
		
	else
		printf("\nArea is less than its perimeter");
		
	return 0;
}	