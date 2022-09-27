#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter first int value: \n");
	scanf("%i",&a);
	
	printf("Enter second value: \n");
	scanf("%i",&b);
	
	printf("Enter third value: \n");
	scanf("%i",&c);
	
	printf("a = %i\nb = %i \nc=%i",a,b,c);
	

	

	if(a>b && a>c)
	{
		printf("\n\n%i is biggest number...!",a);
	}
	
	else if(b>a && b>c)
	{
			printf("\n\n%i is biggest number...!",b);
	}	
	else 
	{
		printf("\n\n%i is biggest number...!",c);
	}
	
	
	
	
	
	
	return 0;
}