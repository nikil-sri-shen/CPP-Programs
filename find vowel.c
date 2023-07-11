#include <stdio.h>
int main()
{
	char ch[100],n,i;
	printf("\t***TO FIND VOWEL FROM SET OF CHARACTERS***");
	printf("\nEnter how much characters has to be entered?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %c",&ch[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'|| ch[i]=='u'|| ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
		{
			printf("\n");
			printf("%c\t",ch[i]);
		}
	}
	return 0;
}
