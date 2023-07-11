#include <stdio.h>
int main()
{
	int year;
	printf("\t***TO FIND WHEATHER THE GIVEN YEAR IS LEAP YEAR OR NOT***");
	printf("\nEnter the year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			    printf("\n %d is a leap year.",year);
			else
			    printf("\n %d is not a leap year.",year);
		}
		else
		    printf("\n %d is a leap year.",year);
	}
	else
	    printf("\n %d is not a leap year.",year);
	return 0;    
}
