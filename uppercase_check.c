#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet: \n");
	scanf("%c",&ch);
	printf("\nn=%c",ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("\n%c is a lowercase letter",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("\n%c is uppercase letter",ch);
	}
	return 0;
}