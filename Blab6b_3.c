#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a side:\n");
	scanf("%d",&a);
	printf("Enter b side:\n");
	scanf("%d",&b);
	printf("Enter c side:\n");
	scanf("%d",&c);
	
	if(a==b==c){
		printf("Your triangle is Equileteral .\n");
	}
	else if (a==b||b==c||c==a){
		printf("Your triangle is Isosceles.\n");
	}
	else if(a!=b!=c){
		printf("Your triangle iS Scelene .\n");
	}
	else{
		printf("Enter valid input");
	}
}
