#include<stdio.h>
void main()
{
	int d,m,k;
	printf("Enter d : ");
	scanf("%d",&d);
	printf("Enter m : ");
	scanf("%d",&m);
	printf("Enter k : ");
	scanf("%d",&k);
	
	if(m>d && m>k)
	{
		printf("%d is greater in three numbers. ",m);
	}
}
