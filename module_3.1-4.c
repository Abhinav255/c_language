#include<stdio.h>
int main()
{
	float r,p,t,SI;
	printf("enter value of principal interest \n");
	scanf("%f",&p);
	printf("enter rate of interest \n");
	scanf("%f",&r);
	printf("enter Time \n");
	scanf("%f",&t);
	SI=p*r*t;
	printf("Simple Interest would be %f \n",SI);
}