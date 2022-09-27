#include<stdio.h>
int main()
{
	float units,total_bill,bill,surcharge;	
	printf("Enter electricity units \n");
	scanf("%f",&units);
	printf("\nunits=%f",units);
	

	if(units<= 50)
	{
		bill=units*0.5;
	}
	else if(units<= 150)
	{
		bill=units*0.75;
	}
	else if(units<= 250)
	{
		bill=units*1.20;
	}
	else if(units>250)
	{
		bill=units*1.50;
	}
	surcharge=bill*0.2;
	total_bill=bill+surcharge;
	printf("\nTotal electricity Bill is %fRs",total_bill);
	return 0;
}