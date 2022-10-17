#include<stdio.h>
int main()
{
	int n,i,j=0,k=0,sume=0,sumo=0;      
	printf("enter starting number");
	scanf("%d",&i);
	for(n=i;n<i+10;n++)
	{
	
		if(n%2!=0)
		{
		j++;//5	
		}
		else if(n%2==0)
		{
			k++;
		}
	}
	for(n=i;n<i+9;n++)
	{
		if(n%2!=0)
		{
		sumo=sumo+n;	
		}
		else if(n%2==0)
		{
		sume=sume+n;
		}
	}
	
	
	printf("%d is the no of odd no. %d is the no of even numbers\n ",j,k);
	printf("%d is the sum of odd no. %d is the sum of even numbers ",sumo,sume);
}