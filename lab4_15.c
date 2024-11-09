#include<stdio.h>
int main()
{
	int h,b;
	float area=0.0;
	
	printf("Enter height of triangle : \n");
	scanf("%d",&h);
	printf("Enter base of triangle : \n");
	scanf("%d",&b);
	
	area=0.5*h*b;
	
	printf("Your area of triangle is : \n %f",area);
	
	return 0;
}
