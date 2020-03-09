#include<stdio.h>
int main()
{
	int a,b=1,i;
	printf("Enter the number: ");
	scanf("%d", &a);
	
	for(i=1; i<=10; i++)
	{
		b=a*i;
		printf("%d * %d = %d \n" ,a,i,b);
	}

return 0;
}	