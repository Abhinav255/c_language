#include<stdio.h>
int main()
{
	
	int n1=0,n2=1,n3;
	int number=9;	
	printf("%i %i ",n1,n2);	
	while(n3<number)//
		{
			n3= n1+n2;			
			n1=n2;
			n2=n3;
			
			printf("%i ",n3);
	}
	
	
	return 0;
}