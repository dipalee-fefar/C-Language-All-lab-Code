#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		printf("Entered character is 'CAPITAL' letter.");
	}
	else if(ch>='a' && ch<='z'){
		printf("Entered character is 'small' letter");
	}
	else if (ch>='0' && ch<='9'){
		printf("Entered character is 'Digits'.");
	}
	else{
		printf("Entered character is 'Special Character'.");
	}
}
