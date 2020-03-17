#include<stdio.h>

int main()
{
	float distance,mtr,feet,inch,cm;
	printf("enter the distance between two cities in Kilometer: ");
	scanf("%f", &distance);
	
	mtr=distance*1000;
	feet=3.28084*mtr;
	cm=mtr*100;
	inch=0.39370*cm;
	
	printf("\ndistance in meter= %f", mtr);
	printf("\ndistance in feet= %f", feet);
	printf("\ndistance in inches= %f", inch);
	printf("\ndistance in centimeter= %f", cm);

	return 0;
}	