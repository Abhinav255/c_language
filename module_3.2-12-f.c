#include<stdio.h>
int main()
{
	int row,col;
	char c='A';
	
	
	for(row=1;row<=5;row++)//1;1>=1;1--
	{
		for(col=1;col<=row;col++)//1;1<=1;1++
		{	
		printf("%c ",'A'+col-1);
		}        
		
		
		printf("\n");
	}
	return 0; 
}