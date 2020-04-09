#include<stdio.h>
int main()
{
	int num,rem1,temp1,rem2,temp2;
	printf("Enter any number between 1 and 500: ");
	scanf("%d",&num);
	
	temp1=num;
	rem1=temp1%10;
	temp1=num/10;
	
	rem2=temp1%10;
	temp2=temp1/10;
	
	if(num ==(rem1*rem1*rem1)+ (rem2*rem2*rem2)+ (temp2*temp2*temp2))
		printf("Armstrong number");
		
	else
		printf("Not a Armstrong number");
		
	return 0;
}	