/* Writw a program that receives month and date of birth as input and prints the coressponding Zordiac sign. */




#include<stdio.h>
int main()
{
	int	month,dob;
	
	printf("\nPress 1 for January");
	printf("\nPress 2 for February");
	printf("\nPress 3 for March");
	printf("\nPress 4 for April");
	printf("\nPress 5 for May");
	printf("\nPress 6 for June");
	printf("\nPress 7 for July");
	printf("\nPress 8 for August");
	printf("\nPress 9 for September");
	printf("\nPress 10 for October");
	printf("\nPress 11 for November");
	printf("\nPress 12 for December");
	
	printf("\n\nEnter the month: ");
	scanf("%d", &month);
	
	printf("Enter Date: ");
	scanf("%d", &dob);
	
	if((month==12 && dob>=22 && dob<=31) || (month==1 && dob>0 && dob<=19))
		printf("Capricorn");
	
	else if((month==1 && dob>=20 && dob<=31) || (month==2 && dob<=17 && dob>0))
		printf("Aquarius");
	
	else if((month==2 && dob>=18 && dob<=29) || (month==3 && dob<=19 && dob>0))
		printf("Pisces");
	
	else if((month==3 && dob>=20 && dob<=31) || (month==4 && dob<=19 && dob>0))
		printf("Aries");
	
	else if((month==4 && dob>=20 && dob<=30) || (month==5 && dob<=20 && dob>0))
		printf("Taurus");
	
	else if((month==5 && dob>=21 && dob<=31) || (month==6 && dob<=20 && dob>0))
		printf("Gemini");
	
	else if((month==6 && dob>=21 && dob<=30) || (month==7 && dob<=22 && dob>0))
		printf("Cancer");
	
	else if((month==7 && dob>=23 && dob<=31) || (month==8 && dob<=22 && dob>0))
		printf("Leo");
	
	else if((month==8 && dob>=23 && dob<=31) || (month==9 && dob<=22 && dob>0))
		printf("Virgo");
	
	else if((month==9 && dob>=23 && dob<=30) || (month==10 && dob<=22 && dob>0))
		printf("Libra");
	
	else if((month==10 && dob>=23 && dob<=31) || (month==11 && dob<=21 && dob>0))
		printf("Scorpio");
	
	else if((month==11 && dob>=22 && dob<=30) || (month==12 && dob<=21 && dob>0))
		printf("Sagittarius");

	else 
		printf("INVALID");
	return 0;
}	