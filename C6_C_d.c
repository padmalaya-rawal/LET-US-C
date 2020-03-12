/* Write a program to generate all the possible combinations fo 1,2 and 3 using for loop*/


#include<stdio.h>
int main()
{
	int a,b,c;
	
	for(a=1; a<=3;a++)
	{
		for(b=1; b<=3; b++)
		{
			for(c=1; c<=3; c++)
			{
				printf("%d\n",a*100+b*10+c);
			}
		}
	}
return 0;
}	