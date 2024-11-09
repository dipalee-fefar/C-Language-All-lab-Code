#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("%d is largest number.",a);
		}
		else{
			printf("%d is largest number.",c);
		}
	}
	else{
		if(b>a){
				if(b>c){
				printf("%d is largest number.",b);
			}
			else{
			printf("%d is largest number.",c);
			}
		}
		
	}
}
