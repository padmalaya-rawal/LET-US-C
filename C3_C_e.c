/* A five digit number is input through the keyboard. Write a program to obtain the reversed number
and to determine whether the original and reversed number is equal or not. */

#include<stdio.h>
int main()
{
	int num, rev, rem, temp;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	temp=num;
	rem=temp%10;
	rev=rem*10000;
	
	rem=(temp/10)%10;
	rev=rev+rem*1000;
	
	rem=(temp/100)%10;
	rev=rev+rem*100;
	
	rem=(temp/1000)%10;
	rev=rev+rem*10;
	
	rem=(temp/10000)%10;
	rev=rev+rem;
	
	printf("Reversed number= %d", rev);
	
	if(num==rev)
	printf("\nOriginal number and reversed number are equal");
	
	else 
	printf("\nOriginal number and reversed number are not equal");
	
	return 0;
}	