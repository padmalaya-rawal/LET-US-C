#include<stdio.h>
int year(int);
int rm(int);
int main()
{
	int num;
	printf("Enter any year: ");
	scanf("%d", &num);
	year(num);
	return 0;
}

int year(int num)
{
	int temp,rem,n,i;
	temp=num;
	
	rem=temp/1000;
	n=rem*1000;
	temp=num%1000;
	rm(n);
	
	rem=temp/100;
	n=rem*100;
	temp=num%100;
	rm(n);
	
	rem=temp/10;
	n=rem*10;
	temp=num%10;
	rm(n);
	
	rem=temp;
	n=rem;
	rm(n);
}

int rm(int n)
{
	int i;
	if(n>=1000 && n<=4000)
	{
		for(i=1; i<=n/1000; i++)
		printf("M");
	}
	
	else if(n>=500 && n<=800)
	{
		printf("D");
		for(i=1; i<=(n/100)-5; i++)
		printf("C");
	}
	
	else if(n>=100 && n<=400)
	{
		for(i=1; i<=n/100; i++)
		printf("C");
	}
	
	else if(n>=50 && n<=80)
	{
		printf("L");
		for(i=1; i<=(n/10)-5; i++)
		printf("X");
	}
	
	else if(n>=10 && n<=40)
	{
		for(i=1; i<=n/10; i++)
		printf("X");
	}
	
	else if(n>=5 && n<=8)
	{
		printf("V");
		for(i=1; i<=n-5; i++)
		printf("I");
	}
	
	else if(n>=1 && n<=3)
	{	
		for(i=1; i<=n; i++)
		printf("I");
	}
	
	else if(n==4)
		printf("IV");
	
	else if(n==9)
		printf("IX");
	
	else if(n==90)
		printf("XC");
	
	else if(n==900)
		printf("CM");
}