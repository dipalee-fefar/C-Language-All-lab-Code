#include<stdio.h>
int main()
{
	int f;
	printf("Enter temperature in Fahrenheit: \n");
	scanf("%d",&f);
	
	int c=((f-32)*5)/9;
	printf("Temperature in calsius is : %d \n",c);
	
	return 0;
}
