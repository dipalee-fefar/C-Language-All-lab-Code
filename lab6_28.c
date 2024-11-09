#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d is greater than %d",a,b);
	}
	else{
		printf("%d is greater than %d",b,a);
	}
}
