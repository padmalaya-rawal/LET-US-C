#include<stdio.h>
#include<math.h>
int main()
{
	int angle;
	printf("Enter the value of angle: ");
	scanf("%d", &angle);
	
	if((pow(sin(angle),2) + pow(cos(angle),2)) ==1)
		printf("TRUE");
	
	else
		printf("FALSE");
		
	return 0;
}	