#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter month number: \n");
	scanf("%i",&n);
	
	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
	{
			printf("31 days ");
	}
	else if(n==4||n==6||n==9||n==11)
	{
			printf("30 days ");
	}
	else if(n==2)
	{
			printf("28 days ");
	}
	else
	{
			printf("Invalid number entered");
	}
}
	