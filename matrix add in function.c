#include <stdio.h>
void matrixadd(int [][100],int,int);
int main()
{
	int a[100][100], i,j,num,r,c,sum=0;
   	printf("\t***TO FIND SUM OF ELEMENTS OTHER THAN DIAGONAL ELEMENTS IN AN ARRAY***");
   	printf("\nENTER THE SQUARE MATRIX");
  	printf("\nEnter no of rows :");
	scanf("%d",&r);
    printf("\nEnter no of columns:");
    scanf("%d",&c);
    printf("\nEnter the values:");
    for(i=0;i<r;i++)
    {
   		for(j=0;j<c;j++)
   		{
   			scanf("%d",&a[i][j]);
		}
    }
    void matrixadd(a,r,c);
	return 0;
}
void matrixadd(int a[][],int,int)
{
    
    for(i=0;i<r;i++)
    {
   		for(j=0;j<c;j++)
   		{
			sum=sum+a[i][j];
		}
    }
    printf("\nThe sum elements are %d",sum);


}
