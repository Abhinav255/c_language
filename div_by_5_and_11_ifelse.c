#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter int value: \n");
	scanf("%i",&n);
	printf("\nn=%i",n);
	
	if(n%5==0 && n%11==0)
	{
		printf("\n%i is divisible by 5 and 11",n);
	}
	else
	{
		printf("\n%i is not divisible by 5 and 11",n);
	}
	return 0;
}