#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any alphabet: \n");
	scanf("%c",&ch);
	printf("\nch=%c",ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n%c is a vowel",ch);
	}
	else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' )
	{
		printf("\n%c is a consonant",ch);
	}
	return 0;
}