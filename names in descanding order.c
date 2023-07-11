#include <stdio.h>
#include<string.h>
int main()
{
	char names[100][100],temp[100],n,i,j;
	printf("\t***TO PRINT NAMES IN DESCENDING ORDER***");
	printf("\nEnter how many names has to be entered?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",names[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(strcmp(names[i],names[j])==-1)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	printf("\n----------------------------------------\n");
    printf("\tSorted names\n");
    printf("------------------------------------------\n");
    int k=1;
	for(i=0;i<n;i++)
	{
		printf("%d.%s",k,names[i]);
		printf("\n");
		k++;
	}
	return 0;
}
