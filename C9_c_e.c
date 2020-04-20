#include<stdio.h>
#include<math.h>
void area(int, int, int, float *);
int main()
{
	int a,b,c;
	float ar;
	printf("Enter the value of a: ");
	scanf("%d", &a);

	printf("Enter the value of b: ");
	scanf("%d", &b);

	printf("Enter the value of c: ");
	scanf("%d", &c);

	area(a,b,c,&ar);
	printf("Area of triangle is : %f", ar);

	return 0;
}

void area(int a, int b, int c, float *ar)
{
	int s;
	s=(a+b+c)/2;
	*ar= pow((s*(s-a)*(s-b)*(s-c)),0.5);
}