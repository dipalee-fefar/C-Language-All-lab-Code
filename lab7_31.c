#include<stdio.h>
void main()
{
	int yr;
	printf("Enter your desire year: ");
	scanf("%d",&yr);
	
	if(yr%4==0 && yr%100!=0){
		printf("Your year is leap year.");
	}
	else if (yr%400==0){
		printf("Your entered year is leap year.");
	}
	else{
		printf("Year is non-laeap year.");
	}
}
