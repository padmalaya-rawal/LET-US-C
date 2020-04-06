/*A certain grade of steel is graded according to the following conditions:
a) hardness>50        b)carbon content <0.7         c)tensile strength>5600

grades are as follow:
Grade 10 - all conditions are met
Grade 9  - only a and b are met
Grade 8  - only b and c are met
Grade 7  - only a and c are met
Grade 6  - only one condition met
Grade 5  - if no condition met   */

#include<stdio.h>
int main()
{
	float cc;
	int hn,ts;
	printf("Enter the value of hardness of the steel: ");
	scanf("%d", &hn);
	
	printf("Enter the value of carbon content: ");
	scanf("%f", &cc);
	
	printf("Enter the value of tensile strength: ");
	scanf("%d", &ts);
	
	if(hn>50 && cc<0.7 && ts>5600)
		printf("Grade 10");
	
	else if(hn>50 && cc<0.7 && ts<=5600)
		printf("Grade 9");
		
	else if(hn<=50 && cc<0.7 && ts>5600)
		printf("Grade 8");
		
	else if(hn>50 && cc>=0.7 && ts>5600)
		printf("Grade 7");
		
	else if(hn>50 || cc<0.7 || ts>5600)
		printf("Grade 6");
	
	else 
		printf("Grade 5");
		
	return 0;
}	