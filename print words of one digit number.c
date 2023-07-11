#include <stdio.h>
int main()
{
	int num;
	printf("\t***TO PRINT WORDS OF ONE DIGIT NUMBERS***");
	printf("\nEnter the numbers:");
	scanf("%d",&num);
	if(num==1)
	   printf("\nONE.");
	else if(num==2)
	   printf("\nTWO.");
	else if(num==3)
	   printf("\nTHREE.");
	else if(num==4)
	   printf("\nFOUR.");
	else if(num==5)
	   printf("\nFIVE.");
	else if(num==6)
	   printf("\nSIX.");
	else if(num==7)
	   printf("\nSEVEN.");
	else if(num==8)
	   printf("\nEIGHT.");
	else if(num==9)
	   printf("\nNINE.");
	else if(num==0)
	   printf("\nZERO.");
	else 
	   printf("\nWRONG INPUT!!!");
	return 0;
}
