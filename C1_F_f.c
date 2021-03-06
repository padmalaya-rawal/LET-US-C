/* Paper of size A0 has dimensions 1189mm X 841mm. Each subsequent 
size A(n) is defined as A(n-1) cut in half parallel to its shorter
sides. Thus paper of size A1 would have dimensions 841mm X 594mm. 
Write a program to calculate and print paper sizes A0,A1,....A8. */

#include<stdio.h>
int main()
{
	int bre=1189,len=841;
	
	printf("\nDimensions of A0= %d X %d ", len, bre);
	printf("\nDimensions of A1= %d X %d ", bre, len/2);
	printf("\nDimensions of A2= %d X %d ", len/2, bre/2);
	printf("\nDimensions of A3= %d X %d ", bre/2,len/4);
	printf("\nDimensions of A4= %d X %d ", len/4,bre/4);
	printf("\nDimensions of A5= %d X %d ", bre/4,len/8);
	printf("\nDimensions of A6= %d X %d ", len/8,bre/8);
	printf("\nDimensions of A7= %d X %d ", bre/8,len/16);
	printf("\nDimensions of A8= %d X %d ", len/16,bre/16);
	
	return 0;
}	