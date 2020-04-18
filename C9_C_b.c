#include<stdio.h>
void result(int, int, int, float *,float *);
int main()
{
	int s1,s2,s3;
	float avg,per;
	printf("Enter the marks of 3 subjects: ");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	result(s1,s2,s3,&avg,&per);
	printf("Average: %f\n",avg);
	printf("Percentage: %f % ",per);
	return 0;
}

void result(int a,int b, int c, float *d, float *e)
{
	*d= (a+b+c)/3;   	
	*e= (a+b+c)/3;
}	