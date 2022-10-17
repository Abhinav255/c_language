#include<stdio.h>
int main()
{
	int row,col;
	int x=1;
	
	
	for(row=1;row<=5;row++)//1;1>=1;1--
	{
		for(col=1;col<=row;col++)//1;1<=1;1++
		{	
		printf("%d ",x++);
		}        
		
		
		printf("\n");
	}
	return 0; 
}