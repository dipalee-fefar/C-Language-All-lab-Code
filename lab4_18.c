#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,max;
	float percentage;
	printf("Enter max : \n");
	scanf("%d",&max);
	printf("Enter m1 \n");
	scanf("%d",&m1);
	printf("Enter m2 \n");
	scanf("%d",&m2);
	printf("Enter m3 \n");
	scanf("%d",&m3);
	printf("Enter m4 \n");
	scanf("%d",&m4);
	printf("Enter m5 \n");
	scanf("%d",&m5);
	
	total=m1+m2+m3+m4+m5;
	printf("Your total mark is : %d \n",total);
	percentage=(total*100)/max;
	
	printf("Your percrntage is: %f",percentage);
	return 0;
}
