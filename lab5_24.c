#include<stdio.h>
void main()
{
	int a, b ;
	int num;
	printf("enter Number a: ");
	scanf("%d",&a);
	printf("enter Number b: ");
	scanf("%d",&b);
	printf("Enter oprater:");
	scanf("%d",&num);
	
	if(num==1){
		printf("Addition of %d and %d is %d",a,b,a+b);
	}
	if(num==2){
		printf("Subtraction of %d and %d is %d",a,b,a-b);
	}
	if(num==3){
		printf("Multiplication of %d and %d is %d",a,b,a*b);
	}
	if(num==4){
		printf("Division of %d and %d is %d",a,b,a/b);
	}
}
