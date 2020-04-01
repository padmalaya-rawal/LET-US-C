#include<stdio.h>
int main()
{
	int bre=1189,len=841,i;
	for(i=0;i<=8;i++)
	{
		printf("\nDimensions of A%d= %d X %d ",i,len,bre);
		len=bre;
		bre=bre/2;
	}
	return 0;
}	