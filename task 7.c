#include<stdio.h>
#include<string.h>
main()
{

	char string1[20],string2[20];
	printf("enter a string:");
	scanf("%s",&string1);
	strcpy(string2,strrev(string1));
	strrev(string2);
	if(!strcmp(string2,string1))
	printf("is a palindrome");
	else
	printf("is not a palindrome");
}
