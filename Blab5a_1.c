#include <stdio.h>
void main()
{
	int feet;
	float inches;
	printf("Enter feet : ");
	scanf ("%d",&feet);
	
	if(feet>0){
		inches=feet*12.0;
		printf("Your inches is %f :",inches);
	}
	else{
		printf("Your input is invalid.");
	}
}
