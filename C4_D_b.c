/* Any character is input through the keyboard, write a program to determine whether the the entered 
character is a capital letter, small letter , a digit or a special symbol. Use the list of ASCII values from internet. */

#include<stdio.h>
int main()
{
	char cha,ch;
	printf("Enter any character: ");
	scanf("%c", &cha);
	
	ch=("%d",cha);
	
	if(ch>=65 && ch<=90)
		printf("Capital letter");
	
	else if(ch>=97 && ch<=122)
		printf("Small letter");
		
	else if(ch>=48 && ch<=57)
		printf("A digit");
		
	else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch<=123 && ch>=127))
		printf("Special symbol");
	
	return 0;
}	