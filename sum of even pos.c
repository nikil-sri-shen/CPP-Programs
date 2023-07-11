#include <stdio.h>
int main()
{
	int x[100],i,num,sum=0;
	printf("\t***TO FIND SUM ELEMENTS IN THE EVEN POSITIONED IN AN ARRAY***");
	printf("\nEnter no of elements :");
    scanf("%d", &num);
    printf("\nEnter the elements:");
    for (i = 0; i < num; i++)
    {
		scanf("%d", &x[i]);
	}
	for(i=0;i<num;i=i+2)
	{
		sum=sum+x[i];
	}
	printf("\nThe sum even positioned elements is %d",sum);
	return 0;
}
