#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char str1[100],x;
	int i;
	printf("\t***CONVERT ALL UPPER CASE TO LOWER CASE AND LOWER CASE TO UPPER***");
	printf("\nEnter the string:");
	gets(str1);
	x=strlen(str1);
	i=0;
	while(i<x)
	{
		if(isupper(str1[i]))
		{
			str1[i]=tolower(str1[i]);
		}
		else
		{
			str1[i]=toupper(str1[i]);
		}
		i=i+1;
	}
	puts(str1);
	return 0;
}

