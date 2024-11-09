#include<stdio.h>
void main()
{
	int a,b,c,d,temp;
	printf("Using temp variable\n ");
	printf("Enter a :\n ");
	scanf("%d",&a);
	printf("Enter b :\n ");
	scanf("%d",&b);
	
	printf("Befor swapping a=%d and b=%d.\n ",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping with temp variable:\n");
	printf("First number is %d and second number is %d \n \n \n \n",a,b);
	
	printf("Without temp variable\n");
	printf("Enter c :\n ");
	scanf("%d",&c);
	printf("Enter d :\n ");
	scanf("%d",&d);
	printf("Befor swapping c=%d and d=%d.\n ",c,d);
	
	c=c+d;
	d=c-d;
	c=c-d;
	
	printf("After swapping without temp variable: \n");
	printf("First number is %d and second number is %d \n",c,d);
}

