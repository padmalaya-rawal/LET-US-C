/* Write a program to generate all the pythagoras triplets with side less than or equal to 30. */

#include<stdio.h>
int main()
{
	int a,b,c,sum;
	
	for(a=1; a<=30; a++)
	{
		for(b=1; b<=30; b++)
		{
			for(c=1; c<=30; c++)
			{
				if((a*a)+(b*b)==(c*c))
					printf("\na=%d, b=%d, c=%d", a,b,c);
			}
		}
	}
	return 0;
}
		