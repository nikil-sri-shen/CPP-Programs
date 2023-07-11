#include <stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("file.txt","r");
	c=getc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=getc(fp);
	}
	fclose(fp);
	return 0;
}
