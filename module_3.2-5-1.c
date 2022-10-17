#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter the no for multiplication table:\n");
	scanf("%d",&i);
	printf("Enter upto which number you require table:\n");
	scanf("%d",&j);
	for(k=1;k<=j;k++)
	{
		printf("%d * %d = %d\n",i,k,i*k);
	}
}