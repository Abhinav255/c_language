#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++)//1;1>=1;1--
	{
		for(col=1;col<=row;col++)//1;1<=1;1++
		{
			if(col%2!=0)
			{
			printf("1 ");
			}
			else
			{
			printf("0 ");
			}
		}
		
		
		printf("\n");
	}
	return 0;
}