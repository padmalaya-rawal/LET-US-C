/* If the cost price and selling price of an item are input through the keyboard, write a program to
determine whether the seller has made profit or incurred loss. Also determine how much profit he made 
or loss he incurred. */

#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter the cost price of the item: ");
	scanf("%d", &cp);
	
	printf("Enter thr selling price of the item: ");
	scanf("%d", &sp);
	
	if(cp>sp)
	printf("Loss of Rs.%d", cp-sp);
	
	else if(sp>cp)
	printf("Profit of Rs.%d",sp-cp);
	
	else if(sp==cp)
	printf("No profit, no loss");
	return 0;
}	