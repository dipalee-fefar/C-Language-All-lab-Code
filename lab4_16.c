#include<stdio.h>
int main()
{
	int p,r,n;
	
	printf("Enter p for interest: \n");
	scanf("%d",&p);
	printf("Enter r for interest: \n");
	scanf("%d",&r);
	printf("Enter n for interest: \n");
	scanf("%d",&n);
	float interest=(p*r*n)/100.00;
	printf("Your interest is: %f ",interest);
	return 0 ;
}
