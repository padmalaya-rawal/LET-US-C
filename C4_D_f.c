/*In boxing the weight class of a boxer is decided as per the following table. Write a program that receives weight as
input and prints out the boxer's weight class.

Boxer class				weight in pounds
Flyweight					<115
Bantamweight			   115-121
Featherweight 			   122-153
Middleweight			   154-189
Heavyweight				    >=190    */

#include<stdio.h>
int main()
{
	int wt;
	printf("Enter the weight of the boxer: ");
	scanf("%d", &wt);
	
	if(wt<115)
		printf("Flyweight");
		
	else if(wt>=115	&& wt<=121)
		printf("Bantamweight");
		
	else if(wt>=122 && wt<=153)
		printf("Featherweight");
		
	else if(wt>=154 && wt<=189)
		printf("Middleweight");
		
	else if(wt>=190)
		printf("Heavyweight");
	
	return 0;
}	