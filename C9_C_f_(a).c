/*
Consider the following example to understand this question in a better way:

		10_|
		9 _|
		8 _| .A(1,8)
		7 _|  
		6 _|		 .P(5,6)	.C(10,6)
		5 _|
		4 _|	 .B(3,4)
		3 _|
		2 _|
		1 _|
		0 _|____________________
		   | | | | | | | | | | | 
		   0 1 2 3 4 5 6 7 8 9 10 

*/

#include<stdio.h>
#include<math.h>
void dist(int,int,int,int,int,int, float *, float *, float *);
void area(float , float , float , float *);
int sm(int, int, int);
int lg(int, int, int);
int pt(int,int,int,int,int,int,int, int);
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	float d12,d23,d31,ar;
	
	printf("Enter coordinates of point A: ");
	scanf("%d%d", &x1,&y1);
		
	printf("Enter coordinates of point B: ");
	scanf("%d%d", &x2,&y2);

	printf("Enter coordinates of point C: ");
	scanf("%d%d", &x3,&y3);
		
	dist(x1,y1,x2,y2,x3,y3,&d12,&d23,&d31);
	printf("\nDistance between point A and B: %f", d12);
	printf("\nDistance between point B and C: %f", d23);
	printf("\nDistance between point C and A: %f", d31);
	
	area(d12,d23,d31,&ar);
	printf("\n\nArea of the triangle: %f", ar);
	
	printf("\n\nEnter the coordinates of point to be checked: ");
	scanf("%d%d", &x4,&y4);
	pt(x1,y1,x2,y2,x3,y3,x4,y4);
	
	return 0;
}

void dist(int x1,int y1,int x2,int y2,int x3,int y3, float *d12, float *d23, float *d31)
{
	*d12= pow((((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1))), 0.5);
	*d23= pow((((x3-x2)*(x3-x2)) + ((y3-y2)*(y3-y2))), 0.5);
	*d31= pow((((x3-x1)*(x3-x1)) + ((y3-y1)*(y3-y1))), 0.5);
}

void area(float d12, float d23, float d31, float *ar)
{
	float s;
	s=(d12+d23+d31)/2;
	*ar= sqrt(s* (s- d12) * (s- d23) * (s- d31));
}

/*To check whether the entered point is inside the triangle or outside the triangle, function pt() will
check whether the x coordinate of that point is greater than the smallest x coordinate of other three 
points and also that x coordinate is lesser than the greatest x coordinate of other three points. 
Similarly, for the y coordinate as well.
*/

int pt(int x1,int y1,int x2,int y2,int x3,int y3, int x4, int y4)
{
	if((x4>sm(x1,x2,x3) && x4<lg(x1,x2,x3))&&(y4>sm(y1,y2,y3) && y4<lg(y1,y2,y3)))
		printf("Inside the triangle");
	
	else
		printf("Outside the triangle");	
}

//To find out the largest of three numbers
int lg(int a, int b, int c)
{
	if(a>b && a>c)
		return a;
		
	else if(b>a && b>c)
		return b;
		
	else if(c>a && c>b)
		return c;
}

//To find out the smallest of three numbers
int sm(int a, int b, int c)
{
	if(a<b && a<c)
		return a;
	
	else if(b<a && b<c)
		return b;
	
	else if(c<a && c<b)
	    return c;
}