#include<stdio.h>
#include<math.h>

void result(int,int,int,int,int,float *, float *, float *);
int main()
{
	int a,b,c,d,e;
	float sum,avg,sd;
	printf("Enter five numbers: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	result(a,b,c,d,e,&sum,&avg,&sd);
	
	printf("SUM= %f\n", sum);
	printf("AVERAGE= %f\n", avg);
	printf("SD= %f\n", sd);
	return 0;
}

void result(int a,int b,int c,int d,int e,float *sum,float *avg,float *sd)
{
	*sum= a+b+c+d+e;
	*avg= *sum/5;
	*sd = sqrt((a*a + b*b + c*c + d*d + e*e + (5*(*avg) * (*avg)) - 10 * (*avg)*(*sum))/25);
}
	