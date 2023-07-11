#include <stdio.h>
#include<stdlib.h>
struct players
{
	int rank;
	char name[50];
	char country[50];
	int runs;
	int wickets;
};
typedef struct players ply;
void func1();
void func2(struct players [],int,int);
int main()
{
	int n,x;
	printf("enter choice:");
	printf("\n1.Display value of one player");
	printf("\n2.Store value of n players and search for particular player:");
	printf("\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:func1();
			   break;
		case 2:printf("\nEnter no of players:");
		       scanf("%d",&x);
		       ply p[10];
			   int y,i;
			   printf("\nEnter players details:");
			   for(i=1;i<=x;i++)
			   {
					printf("\n\t*** PLAYER %d ***",i);
					printf("\nEnter the rank:");
	    			scanf("%d",&p[i].rank);
	   				printf("Enter the name:");
	    			scanf("%s",&p[i].name);
	    			printf("Enter the country:");
    				scanf("%s",&p[i].country);
    				printf("Enter the runs:");
    				scanf("%d",&p[i].runs);
    				printf("Enter the wickets:");
    				scanf("%d",&p[i].wickets);
			   }
			   printf("\nEnter the rank of the player to get details:");
	           scanf("%d",&y);
	           func2(p,x,y);
		       break;
		case 3:exit(0);	
	}
	return 0;
}
void func1()
{
	ply p1;
	printf("\nEnter the rank:");
	scanf("%d",&p1.rank);
	printf("Enter the name:");
	scanf("%s",&p1.name);
	printf("Enter the country:");
	scanf("%s",&p1.country);
	printf("Enter the runs:");
	scanf("%d",&p1.runs);
	printf("Enter the wickets:");
	scanf("%d",&p1.wickets);
	printf("\nDetails of the player entered is");
	printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
	printf("\n%d\t%s\t%s\t%d\t%d",p1.rank,p1.name,p1.country,p1.runs,p1.wickets);
}
void func2(struct players p[10],int x,int y)
{
	int i;
	for(i=0;i<x;i++)
	{
		if(p[i].rank==y)
		{
			printf("\nDetails of the player with rank %d is",y);
        	printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
        	printf("\n%d\t%s\t%s\t%d\t%d",p[i].rank,p[i].name,p[i].country,p[i].runs,p[i].wickets);
		}
	}
}

