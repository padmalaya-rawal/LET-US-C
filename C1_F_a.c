#include<stdio.h>

int main()
{
	int bs,da,hra,gs;
	printf("enter the basic salary of RAMESH= ");
	scanf("%d", &bs);
	
	da=(40*bs)/100;
	hra=(20*bs)/100;
	gs=da+hra+bs;
	
	printf("RAMESH's gross salary is %d", gs);
	
	return 0;
}	