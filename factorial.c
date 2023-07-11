#include <stdio.h>
int main()
{
	int n,prd=1,i=1;
	printf("\t***PRINT THE FACTORIAL OF THE NUMBER***");
	printf("\nEnter the number:");
	scanf("%d",&n);
//**********************************************************************
	while(i<=n)
	{
		prd=prd*i;
		i++;
	}
	printf("\nThe factorial is %d",prd);
//**********************************************************************	
	int prd1=1,j=1;
	for(j=1;j<=n;j++)
	{
		prd1=prd1*j;
	}
	printf("\nThe factorial is %d",prd1);
//**********************************************************************    
	int prd2=1,k=1;
	do
    {
    	prd2=prd2*k;
		k++;	
	}while(k<=n);
	printf("\nThe factorial is %d",prd2);
	return 0;
}
