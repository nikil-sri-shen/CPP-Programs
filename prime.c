#include <stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}
void prime()
{
	int n,i,j;
	printf("\nEnter the nth number:");
	scanf("%d",&n);
   	for(i=2; i<=n; i++)
	{	
	    int c=0;
		for(j=i; j<=i; j++)
		{
			if(i%j==0)
			{
			c++;
			}
		}
		if(c==2)
		{
		printf("%d",i);
		}
	}
	
}
