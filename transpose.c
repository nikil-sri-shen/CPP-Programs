#include <stdio.h>
int main()
{
	int x[100][100],y[100][100],r,c,i,j;
	printf("\nEnter no of rows:");
	scanf("%d",&r);
	printf("\nEnter no of columns:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\nTransposed matrix is");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			y[i][j]=x[j][i];
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("\t%d",y[i][j]);
		}
	printf("\n");
	}
	return 0;
}
	
