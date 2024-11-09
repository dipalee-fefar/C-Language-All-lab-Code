#include<stdio.h>
int main()
{
	int r;
	float pi = 3.14, area=0.0;
	
	printf("Enter radius of circle : \n");
	scanf("%d",&r);
	
	area=pi*r*r;
	
	printf("Your area of circle is : \n %f",area);
	
	return 0;
}
