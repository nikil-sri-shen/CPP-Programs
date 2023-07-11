#include <stdio.h>
int main()
{
	int num;
	printf("\t***TO PRINT WORDS OF ONE DIGIT NUMBERS***");
	printf("\nEnter the number:");
	scanf("%d",&num);
	switch(num)
	{
		case 1: printf("\nONE.");
		        break;
		case 2: printf("\nTWO.");
		        break;
		case 3: printf("\nTHREE.");
		        break;
		case 4: printf("\nFOUR.");
		        break;
		case 5: printf("\nFIVE.");
		        break;
		case 6: printf("\nSIX.");
		        break;
		case 7: printf("\nSEVEN.");
		        break;
		case 8: printf("\nEIGHT.");
		        break;
		case 9: printf("\nNINE.");
		        break;
		case 0: printf("\nZERO.");
		        break;
		default: printf("\nWRONG INPUT!!!");
		
	}
	return 0;
}
