/* Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill
temperature is always lower than the air temperature, and is calculated as per the formula:
wcf=35.74+0.6215t+(0.4275t -35.75)* v^0.16 

where t=temperature and v=wind velocity
NOTE: here one thing which is not mentioned is temp is in fahrenheit and wind velocity is in mph */


#include<stdio.h>
#include<math.h>
int main()
{
	float temp,vel,wcf;
	printf("enter the temperature: ");
	scanf("%f", &temp);
	
	printf("Enter the wind velocity: ");
	scanf("%f", &vel);

	wcf= 35.74 + 0.6215*temp + ((0.4275*temp -35.75)* pow(vel,0.16));
	printf("The wind chill factor is %f",wcf);
	return 0;
}	