/*The BMI is defined as ratio of weight of a person in kg to the square of the height in meters. Write a program to receive weight and height, 
calculates BMI and reports the category of the person. */

#include<stdio.h>
#include<math.h>
int main()
{
	float wt,ht,bmi;
	printf("Enter the weight in kilograms: ");
	scanf("%f", &wt);
	
	printf("Enter the height in meters: ");
	scanf("%f", &ht);
	
	bmi= (wt/pow(ht,2));
	printf("BMI is %f \n",bmi);
	
	if(bmi<15)
		printf("Starvation");
		
	else if(bmi>=15.1 && bmi<=17.5)	
		printf("Anorexic");
		
	else if(bmi>=17.6 && bmi<=18.5)
		printf("Underweight");
	
	else if(bmi>=18.6 && bmi<=24.9)
		printf("Ideal");
		
	else if(bmi>=25 && bmi<=25.9)
		printf("Overweight");
		
	else if(bmi>=30 && bmi<=30.9)
		printf("Obese");
		
	else if(bmi>=40)
		printf("Morbidly obese");
		
	else 
		printf("INVALID");
	
	return 0;
}	