#include<stdio.h>
void main()
{
	int unit;
	float charge, total;
	
	printf("Enter Units : \n");
	scanf("%d",&unit);
	
	if(unit<=50){
		charge=unit*0.50;
	}
	 else if (unit > 50 && unit <= 150) {
        charge = (50 * 0.50) + ((unit - 50) * 0.75);
    }
    else if (unit > 150 && unit <= 250) {
        charge = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else {
        charge = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }

    total = charge + (charge * 0.20);

    printf("Total Electricity Bill: Rs. %.2f\n", total);
}
