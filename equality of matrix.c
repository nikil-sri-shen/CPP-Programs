#include<stdio.h>
int main()
{
 	int i, j, r1,r2 ,c1,c2, a[100][100], b[100][100], isEqual;
    printf("\n Please Enter Number of rows and columns for first matrix:  ");
 	scanf("%d %d", &r1, &c1);
 	printf("\n Please Enter Number of rows and columns for second matrix:  ");
 	scanf("%d %d", &r2, &c2);
  	if(r1==r2 && c1==c2)
  	{
	printf("\n Please Enter the First Matrix Elements\n");
 	for(i = 0; i < r1; i++)
  	{
   		for(j = 0;j < c1;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   	printf("\n Please Enter the Second Matrix Elements\n");
		for(i = 0; i < r2; i++)
  		{
   		for(j = 0;j < c2;j++)
    	{
      		scanf("%d", &b[i][j]);
    	}
  		}
  		isEqual = 1;
   		for(i = 0; i < r1; i++)
  		{
   		for(c1 = 0;j < c1;j++)
    	{
      		if(a[i][j] != b[i][j])
			{
			  	isEqual = 0;
			  	break;
			}    
   	 	}
  		}
 		if(isEqual == 1)
 		{
 			printf("\n Matrix a is Equal to Matrix b");		
		}
		else
		{
			printf("\n Matrix a is Not Equal to Matrix b");
		}
	}
	else
	printf("\n Matrix a is Not Equal to Matrix b");
 	return 0;
}
