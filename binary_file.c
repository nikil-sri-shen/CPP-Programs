#include <stdio.h>
#include<stdlib.h>
struct players
{
	int rank;
	char name[50];
	char country[50];
	int runs;
	int wickets;
}p1,p2,p3,pl2[10],pl3[10];
typedef struct players ply;
int main()
{
	FILE *fp;
	fp=fopen("file.txt","w");
	int n,x;
	printf("enter choice:");
	printf("\n1.Display value of one player");
	printf("\n2.Store value of n players and search for particular player:");
	printf("\n3.Exit\n");
	scanf("%d",&n);
	switch(n)
	{
	/*	case 1:	printf("\nEnter the rank:");
				scanf("%d",&p1.rank);
				printf("Enter the name:");
				scanf("%s",&p1.name);
				printf("Enter the country:");
				scanf("%s",&p1.country);
				printf("Enter the runs:");
				scanf("%d",&p1.runs);
				printf("Enter the wickets:");
				scanf("%d",&p1.wickets);
				fwrite(p2,sizeof(ply),1,fp);
				fread(p3,sizeof(ply),1,fp);
				printf("\nDetails of the player entered is");
				printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
				printf("\n%d\t%s\t%s\t%d\t%d",p1.rank,p1.name,p1.country,p1.runs,p1.wickets);
				fclose(fp);
			   break;*/
		case 2:printf("\nEnter no of players:");
		       scanf("%d",&x);
		       ply p[10];
			   int y,i;
			   printf("\nEnter players details:");
			   for(i=1;i<=x;i++)
			   {
					printf("\n\t*** PLAYER %d ***",i);
					printf("\nEnter the rank:");
	    			scanf("%d",&pl2[i].rank);
	   				printf("Enter the name:");
	    			scanf("%s",&pl2[i].name);
	    			printf("Enter the country:");
    				scanf("%s",&pl2[i].country);
    				printf("Enter the runs:");
    				scanf("%d",&pl2[i].runs);
    				printf("Enter the wickets:");
    				scanf("%d",&pl2[i].wickets);
			   }
			   fwrite(pl2,sizeof(ply),x,fp);
   			   fread(pl3,sizeof(ply),x,fp);
			   printf("\nEnter the rank of the player to get details:");
	           scanf("%d",&y);
	           for(i=1;i<=x;i++)
			   if(pl3[i].rank==y)
			   {
		    		printf("\nDetails of the player with rank %d is",y);
        			printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
        			printf("\n%d\t%s\t%s\t%d\t%d",pl3[i].rank,pl3[i].name,pl3[i].country,pl3[i].runs,pl3[i].wickets);
        			exit(0);
			   }
			   break;
		case 3:exit(0);	
	}
	return 0;
}



