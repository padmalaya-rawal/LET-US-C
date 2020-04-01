/*if a five digit number is entered through the keyboard, write a program to reverse the number */

#include<stdio.h>
int main()
{
	int num,rev,rem,temp;
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	
	temp=num;
	
	rem=temp%10;
	temp=temp/10;
	rev=rem*10000;
	printf("\n%d",rev);
	
	rem=temp%10;
	temp=temp/10;
	rev=rev+rem*1000;
	printf("\n%d",rev);
	
	rem=temp%10;
	temp=temp/10;
	rev=rev+rem*100;
	printf("\n%d",rev);	
	
	rem=temp%10;
	temp=temp/10;
	rev=rev+rem*10;
	printf("\n%d",rev);	
	
	rem=temp%10;
	temp=temp/10;
	rev=rev+rem;
	printf("\n%d",rev);	
	
	printf("reverse of the entered number is : %d",rev);
	return 0;
}	