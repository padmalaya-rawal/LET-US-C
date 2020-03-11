#include<stdio.h>
int main()
{
	int num,oct,rem,temp;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	rem=num;
	
	while(temp==0)
	{
		temp=rem%8;
		rem=temp;
		printf("%d",rem);
	}	
	
	
	return 0;
}	