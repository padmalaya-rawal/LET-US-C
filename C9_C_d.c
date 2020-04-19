#include<stdio.h>
void shift(int *, int *, int *);
int main()
{
	int x, y, z;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	
	printf("Enter the value of y: ");
	scanf("%d", &y);
	
	printf("Enter the value of z: ");
	scanf("%d", &z);
	
	printf("Before shifting: ");
	printf("x= %d  y= %d  z= %d", x,y,z);
	shift(&x, &y, &z);
	printf("\n\nAfter shifting : ");
	printf("x= %d  y= %d  z= %d", x,y,z);
	return 0;
}

void shift(int *a, int *b, int *c)
{
	int t;
	t=*a;
	*a=*b;
	*b=*c;
	*c=t;
}