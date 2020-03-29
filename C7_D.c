#include<stdio.h>
int main()
{
	int class,fsub;
	printf("Enter the class: ");
	scanf("%d", &class);
	
	printf("Enter the number of failing subjects: ");
	scanf("%d", &fsub);
	
	switch(class)
	{
		case 1:
		if(fsub<=3)
			printf("Grace of 5 marks per subject");
		else 
			printf("No grace");
		break;
		
		case 2:
		if(fsub<=2)
			printf("Grace of 4 marks per subject");
		else 
			printf("No grace");
		break;
		
		case 3:
		if(fsub==1)
			printf("Grace of 5 marks");
		else
			printf("No grace");
		break;
		
	}
	
return 0;
}