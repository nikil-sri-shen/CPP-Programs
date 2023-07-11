#include <stdio.h>
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
   for(i=0;i<r;i++)
   {
   		for(j=0;j<c;j++)
   		{
   			if(i!=j)
			sum=sum+a[i][j];
		}
   }
   printf("\nThe sum elements other than diagonal is %d",sum);
   return 0;
}
