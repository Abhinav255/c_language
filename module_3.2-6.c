#include<stdio.h>

int fact(int n,int i)//5
{
	
	if(n>1)//5>1
	{
	i=i*(n-1);//i=5*(4-1)=5*4=20
	n--;
	return fact(n,i);
	}
}
int main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);//5
	printf("factorial of %d is %d",a,fact(a,a));//5,fact(5)
}