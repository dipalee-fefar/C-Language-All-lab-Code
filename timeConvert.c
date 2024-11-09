//Convert second int hh:mm:ss formate

#include<stdio.h>
int main()
{
	int second,minute,hour;
	printf("Enter seconds : \n");
	scanf("%d",&second);
	
	minute = second / 60;
    second = second % 60; 
    hour = minute / 60;
    minute = minute % 60;
	
	printf("Your time is %d:%d:%d",hour,minute,second);
	return 0;
}
