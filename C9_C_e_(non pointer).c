#include<stdio.h>
#include<math.h>
float area(int, int, int);
int main()
{
	int a,b,c;
	float d;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	printf("Enter the value of c: ");
	scanf("%d", &c);
	
	d=area(a,b,c);
	printf("Area of triangle is : %f", d);
	
	return 0;
}

float area(int a, int b, int c)
{
	int s;
	float ar;
	s=(a+b+c)/2;
	ar= pow((s*(s-a)*(s-b)*(s-c)),0.5);
	return ar;
}