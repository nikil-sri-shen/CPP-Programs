#include<stdio.h>
#include<stdlib.h>
void transpose(int *[],int ,int);
int main()
{
	int *a[100],r,c,i,j;
	printf("\n***TO FIND TRANSPOSE OF A MATRIX USING FUNCTIONS***");
	printf("\nEnter no of rows:");
	scanf("%d",&r);
	printf("\nEnter no of columns:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		a[i]=(int *)malloc(c*sizeof(int));
	}
	printf("\nEnter the elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a,r,c);
	for(i=0;i<r;i++)
	{
		free(a[i]);
		a[i]=NULL;
	}
	return 0;
}
void transpose(int *x[100],int m,int n)
{
	int i,j,**b;
	for(i=0;i<m;i++)
	{
		b[i]=(int *)malloc(n*sizeof(int));
	}
	printf("\nTransposed matrix is");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=x[j][i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%d",b[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<m;i++)
	{
		free(b[i]);
		b[i]=NULL;
	}
}
