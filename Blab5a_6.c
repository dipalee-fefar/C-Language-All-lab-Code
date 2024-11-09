#include <stdio.h>
void main()
{
	char ch;
	printf("Enter your favourite Character:\n");
	scanf(" %c",&ch);
	
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	{
		printf("Your favourite character is vowel.");
	}
	else
	{
		printf("Your favourite character is consonant.");
	}
}
