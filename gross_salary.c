#include<stdio.h>
int main()
{
	float salary,hra,dra,gross;	
	printf("Enter Salary amount \n");
	scanf("%f",&salary);
	printf("\nSalary=%f",salary);
	

	if(salary<= 10000)
	{
	hra=salary*0.8;
	dra=salary*0.2;
	}
	else if(salary<= 20000)
	{
		hra=salary*0.75;
		dra=salary*0.1;
	}
	else if(salary> 20000)
	{
		hra=salary*0.7;
		dra=salary*0.05;
	}
	gross=salary+hra+dra;
	printf("\nGross salary is %f",gross);
	return 0;
}