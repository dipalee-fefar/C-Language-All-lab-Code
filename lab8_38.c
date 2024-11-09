#include<stdio.h>
void main()
{
	int a,b,operation;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	
	printf("Enter operation to perform: \n");
	printf("Enter \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division: ");
	scanf("%d",&operation);
	
	switch(operation){
		case 1:
			printf("Addition of %d and %d is %d .",a,b,a+b);
			break;
		case 2:
			printf("Subtraction of %d and %d is %d .",a,b,a-b);
			break;
		case 3:
			printf("Multiplication of %d and %d is %d .",a,b,a*b);
			break;
		case 4:
			printf("Division of %d and %d is %d .",a,b,a/b);
			break;
		default:
			printf("Invalid Input , please enter valid input.");
	}
}
