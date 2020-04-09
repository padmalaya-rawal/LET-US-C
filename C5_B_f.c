#include<stdio.h>
int main()
{
	int user=0, i, comp=0, j, left, total=21;
	
	printf("\nRules: ");
	printf("\n1. There are 21 matchsticks in total.");
	printf("\n2. You can pick 1,2,3 or 4 matchsticks at a time.");
	printf("\n3. The one who picks the last matchstick losses the game.");
	
	for(i=1; i<5; i++)
	{
		left=total-user-comp;
		printf("\n\nSticks left: %d", left);
		printf("\n\nUser pick:");
		scanf("%d", &user);

		if(user>4 || user==0)
			printf("Invalid input");
		
		else if(user>0 && user<=4)
		{
			
			
	}
	return 0;
}	
	