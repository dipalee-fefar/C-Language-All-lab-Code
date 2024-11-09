#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,total;
	printf("Enter m1: ");
	scanf("%d",&m1);
	printf("Enter m2: ");
	scanf("%d",&m2);
	printf("Enter m3: ");
	scanf("%d",&m3);
	printf("Enter m4: ");
	scanf("%d",&m4);
	printf("Enter m5: ");
	scanf("%d",&m5);
	
	total=(m1+m2+m3+m4+m5);
	float per=(float)total/500*100;
	
	if(per>=70){
		printf("Distinction Class");
	}
	else if(per>60 && per<=70){
		printf("First Class");
	}
	else if(per>45 && per<=60){
		printf("Second Class");
	}
	else if(per>35 && per<=45){
		printf("Pass Class");
	}
	else {
		printf("Fail");
	}
}
