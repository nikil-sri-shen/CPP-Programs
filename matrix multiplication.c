#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,k;
	int r1,c1,r2,c2;
	printf("\nEnter no of rows in row1:");
    scanf("%d",&r1);
    printf("\nEnter no of columns in column1:");
    scanf("%d",&c1);
    printf("\nEnter no of rows in row2:");
    scanf("%d",&r2);
    printf("\nEnter no of columns in column2:");
    scanf("%d",&c2);
    if(c1==r2)
    {
    	printf("\nEnter the first array");
    	printf("\nEnter the values:");
   		for(i=0;i<r1;i++)
   		{
   			for(j=0;j<c1;j++)
   			{
   			scanf("%d",&a[i][j]);
			}
  		}
  		printf("\nEnter the second array");
    	printf("\nEnter the values:");
   		for(i=0;i<r2;i++)
   		{
   			for(j=0;j<c2;j++)
   			{
   			scanf("%d",&b[i][j]);
			}
  		}
  		for(i=0;i<r1;i++)
   		{
   			for(j=0;j<c2;j++)
   			{
   				c[i][j]=0;
   				for(k=0;k<c1;k++)
			    {
			    	c[i][j]= c[i][j]+a[i][k]*b[k][j];
				}
			}
  		}
  		printf("\nThe product of the matrix is");
  		for(i=0;i<r1;i++)
   		{
   			for(j=0;j<c2;j++)
   			{
				printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	}
	else
	printf("\nThe multiplication of matrix cannot be done.");
	return 0;
}
