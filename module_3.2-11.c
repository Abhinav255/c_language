#include<stdio.h>
int main()
{
	
	int number,rem,n1=0,n2; 
	printf("enter a number with more than 1 digit: ");
	scanf("%d",&number);
	n2=number;
	while(number!=0)//0!=0 2351%10=2 3 5 1
	{
		rem = number%10;// 235%10=5
		if(n2==number || number/10==0)
		{
			n1=n1+rem;//4=3+1
		}
		
		//n1=n1+rem;
		number = number/10;// 2/10=0
	 
		
	}
		printf("%d is the summation",n1);

	

	
	return 0;
}