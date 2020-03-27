/* If a five digit number is entered through the keyboard, write a program to
calculate sum of its digit */


#include<stdio.h>
int main()
{
	int num,rem1,rem2,rem3,rem4,rem5,sum;
	printf("Enter a five digit number= ");
	scanf("%d", &num);
	
	rem1=num%10;
	rem2=(num%100)/10;
	rem3=(num%1000)/100;	
	rem4=(num%10000)/1000;
	rem5=num/10000;
	
	sum=rem1+rem2+rem3+rem4+rem5;
	printf("\nSum of all digits of 5 digit number is: %d", sum);
	return 0;
}	