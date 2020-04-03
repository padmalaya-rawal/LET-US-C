#include<stdio.h>
int main()
{
	int year,d;
	printf("Enter any year: ");
	scanf("%d", &year);
	
	d=(year-2001);
	
	if(d/6==1 || d/6==-1)
		printf("Monday");
	
	else if(d/6==2 || d/6==-2)
		printf("Tuesday");
		
	else if(d/6==3 || d/6==-3)
		printf("Wednesday");
	
	else if(d/6==4 || d/6==-4)
		printf("Thrusday");
	
	else if(d/6==5 || d/6==-5)
		printf("Friday");
		
	else if(d/6==6 || d/6==-6)
		printf("Saturday");
	
	else if(d/6==7 || d/6==-7)
		printf("Sunday");
	
	return 0;
}	