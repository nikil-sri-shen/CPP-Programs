#include <stdio.h>
void factors();
int main() 
{
    factors();
	
    return 0;
}
void factors()
{
	int num, i,j;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) 
	{
        for(j=1;j<=i;j++)
        {
		    if (i*j==num) 
			{
            printf("\n(%d,%d)", i,j);
        	}
        }
    }
}
