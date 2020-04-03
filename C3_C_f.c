/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a prigram to determine
the youngest of three. */

#include<stdio.h>
int main()
{
	int ram, shyam, ajay;
	printf("Enter Ram's age: ");
	scanf("%d", &ram);
	
	printf("Enter Shyam's age: ");
	scanf("%d", &shyam);
	
	printf("Enter ajay's age: ");
	scanf("%d", &ajay);
	
	if(ram<shyam && ram<ajay)
		printf("\nRam is the youngest");
		
	else if(shyam<ram && shyam<ajay)
		printf("\nShyam is the youngest");
	
	else if(ajay<ram && ajay<shyam)
		printf("\nAjay is the youngest");
	
	return 0;
}	