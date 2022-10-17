#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers\n");
	scanf("%d %d",&a,&b);
	printf("addition of %d and %d is %d \n",a,b,a+b);
	printf("subtraction of %d and %d is %d\n ",a,b,a-b);
	printf("multiplication of %d and %d is %d\n ",a,b,a*b);
	printf("division of %d and %d is %d \n",a,b,a/b);
	printf("modulo of %d and %d is %d \n",a,b,a%b);	
}