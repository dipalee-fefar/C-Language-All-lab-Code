#include<stdio.h>
void main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	
	if (a%2==0)
	{
		printf("Your number is even.");
	}
	else 
	{
		printf("Your number is odd.");
	}
}
