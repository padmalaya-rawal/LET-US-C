/*Q3: If the marks obtained by a student in five subjects are input through the
keyboard, write a program to find out the aggregate marks and percentage 
marks obtained by the student. Assume maximum marks for each subject is 100.
*/ 

#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,agg,per;
	printf("enter the marks of subject 1: ");
	scanf("%f", &s1);
	
	printf("enter the marks of subject 2: ");
	scanf("%f", &s2);
	
	printf("enter the marks of subject 3: ");
	scanf("%f", &s3);
	
	printf("enter the marks of subject 4: ");
	scanf("%f", &s4);
	
	printf("enter the marks of subject 5: ");
	scanf("%f", &s5);
	
	agg=s1+s2+s3+s4+s5;
	per=(agg*100)/500;
	
	printf("\nAggregate marks: %f", agg);
	printf("\npercentge: %f", per);
	
	return 0;
}	