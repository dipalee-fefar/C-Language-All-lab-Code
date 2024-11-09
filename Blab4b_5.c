#include<stdio.h>
int main()
{
	int days,week,year;
	printf("Enter number of days : \n");
	scanf("%d",&days);
	
	year = days / 365; 
    days = days % 365;

    week = days / 7;
    days = days % 7;
	
	printf("Your days in YY:WW:DD is : %d:%d:%d ",year,week,days);
	
	return 0;
}
