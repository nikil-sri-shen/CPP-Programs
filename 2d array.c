#include <stdio.h>
int main()
{
	int x[100][100],r,c,i,j;
	printf("\nEnter no of rows:");
	scanf("%d",&r);
	printf("\nEnter no of columns:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
			x[i][j]=x[i][j]+5;
		}
	}
	printf("\nThe changed values are\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
	printf("\n\n");
	}
	return 0;
}
