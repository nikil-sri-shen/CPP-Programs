#include <stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("\nEnter the no. of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
