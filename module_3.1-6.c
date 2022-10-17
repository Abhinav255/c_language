#include<stdio.h>
int main()
{
	float years,days,a;
	
//	printf("enter 0 to convert days to years\nenter 1 to convert years to days ");
//	scanf("%f",&a);
//	
//	if(a==0)
	//{
	printf("\nenter no of days");	
	scanf("%f",&days);
	years=days/365;
		printf("\n%f days= %f years",days,years);
	//}
//	else if(a==1)
//	{
	printf("\nenter years");	
	scanf("%f",&years);
	days=years*365;
		printf("\n%f years= %f days",years,days);
	//}
	return 0;
}