#include<stdio.h>
void main()
{
	int choice;
	printf ("Enter Number:\n");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
			printf("Month is January\n");
			printf("Total days are 31");
			break;
		case 21:
			printf("Month is Fabruary\n");
			printf("Total days are 28");
			break;
		case 3:
			printf("Month is March\n");
			printf("Total days are 31");
			break;
		case 4:
			printf("Month is April\n");
			printf("Total days are 30");
			break;
		case 5:
			printf("Month is May\n");
			printf("Total days are 31");
			break;
		case 6:
			printf("Month is June\n");
			printf("Total days are 30");
			break;
		case 7:
			printf("Month is July\n");
			printf("Total days are 31");
			break;
		case 8:
			printf("Month is August\n");
			printf("Total days are 31");
			break;
		case 9:
			printf("Month is September\n");
			printf("Total days are 30");
			break;
		case 10:
			printf("Month is October\n");
			printf("Total days are 31");
			break;
		case 11:
			printf("Month is November\n");
			printf("Total days are 30");
			break;
		case 12:
			printf("Month is December\n");
			printf("Total days are 31");
			break;
		default:
			printf("Invalid Input , please enter valid input.");
	}
}
