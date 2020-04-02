/*Consider a currency system in which there are notes of seven denominations, namely, Re.1,
Rs.2, Rs.5, Rs.10, Rs.50 and Rs.100. If a sum of Rs.N is entered through the keyboard, write
a program to compute the smallest number of notes that will combine to give Rs.N. */

#include<stdio.h>
int main()
{
	int r1,r2,r5,r10,r50,r100,rn;
	printf("Enter the amount: ");
	scanf("%d", &rn);
	
	r100=rn/100;
	r50=(rn%100)/50;
	r10=((rn%100)%50)/10;
	r5=(((rn%100)%50)%10)/5;
	r2=((((rn%100)%50)%10)%5)/2;
	r1=(((((rn% 100)%50)%10)%5)%2)/1;
	
	printf("\nNumber of notes of : ");
	printf("\nRe.1   = %d ",r1);
	printf("\nRs.2   = %d ",r2);
	printf("\nRs.5   = %d ",r5);
	printf("\nRs.10  = %d ",r10);
	printf("\nRs.50  = %d ",r50);
	printf("\nRs.100 = %d ",r100);
	
	printf("\nTotal number of notes= %d", (r1+r2+r5+r10+r50+r100));
	return 0;
}