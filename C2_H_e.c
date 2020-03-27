/*write a program to receive values of latitude(L1,L2) and longitude(G1,G2), in degrees,
of two places on the earth and output the distance (D) between them in nautical miles. 
Formula for distance in nautical miles is:
D=3963 acos(sinL1 sinL2 + cosL1 cosL2 *cos(G2-G1)) */

#include<stdio.h>
#include<math.h>
int main()
{
	float L1,L2,G1,G2,dist;
	printf("Enter the value of latitude: ");
	scanf("%f ,%f",&L1, &L2);
	
	printf("Enter the value of Longitude: ");
	scanf("%f ,%f",&G1, &G2);
	
	dist= 3963 * acos((sin((L1*180)/3.14)*sin((L2*180)/3.14)) + (cos((L1*180)/3.14)*cos((L2*180)/3.14)*(cos(((G2-G1)*180)/3.14))));
	printf("distance in nautical miles is %f ", dist);
	
	return 0;
}	
	