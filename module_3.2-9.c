#include<stdio.h>
int main()
{
	
	int number,rem,n1=0; 
	printf("enter a number with more than 1 digit");
	scanf("%d",&number);
	
	while(number!=0)//0!=0
	{
		rem = number%10;// -1532%10=
		if(n1<rem) //		0<2
		{
		n1=rem;     //		n1=2
		}
		number = number/10;// -1532/10=0
	 
		
	}
		printf("%d is the greatest number",n1);
	//
	
	//printf("%i",res);
	//printf("rem= %i num = %d",rem,number); // 1 0
	
	
	return 0;
}