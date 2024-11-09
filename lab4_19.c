#include<stdio.h>
int main()
{
	float km , meter, feet ,inches, cm ;
	
	printf("Enter Distance in Kilometer : \n");
	scanf("%f",&km);
	
	meter = km*1000;
	feet = km*1000*3.28;
	inches = km*1000*39.37;
	cm = km*1000*100;
	
	printf("your total meters of %f kilometers is %f \n",km,meter);
	printf("your total feets of %f kilometers is %f \n",km,feet);
	printf("your total inches of %f kilometers is %f \n",km,inches);
	printf("your total centimeters of %f kilometers is %f \n",km,cm);
	
	return 0;
}
