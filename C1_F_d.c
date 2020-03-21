/* Temperature of a city in Fahrenheit is input through the keyboard.
Write a program to convert this temperature in centigrade degree.*/

#include <stdio.h>
int main()
{
	float temp,conv;
	printf("enter the temperature in Fahrenheit: ");
	scanf("%f", &temp);
	conv=(temp-32)*5/9; 
	printf("Temperature in Celcius= %f", conv);
	
	return 0;
}	