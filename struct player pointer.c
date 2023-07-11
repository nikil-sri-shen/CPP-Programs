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
void update(struct players *,int,int,int);
int main()
{
	int n,k;
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
		       scanf("%d",&k);
		       int y,i,z,count=1;
	  		   ply *p=(ply*)malloc(k*sizeof(ply));
			   printf("\nEnter players details:");
			   for(i=0;i<k;i++)
			   {
					printf("\n\t*** PLAYER %d ***",count);
					printf("\nEnter the rank:");
				    scanf("%d",&p[i].rank);
	 			    printf("Enter the name:");
				    scanf("%s",p[i].name);
	 			    printf("Enter the country:");
    				scanf("%s",p[i].country);
    				printf("Enter the runs:");
    				scanf("%d",&p[i].runs);
    				printf("Enter the wickets:");
    				scanf("%d",&p[i].wickets);
    				count++;
			   }
			   printf("\nEnter the rank of the player to change runs:");
			   scanf("%d",&y);
			   printf("\nEnter the new runs:");
			   scanf("%d",&z);
			   update(p,k,y,z);
		       break;
		case 3:exit(0);	
	}
	return 0;
}
void func1()
{
	ply *p1;
	p1=(ply*)malloc(1*sizeof(ply));
	printf("\nEnter the rank:");
	scanf("%d",&p1->rank);
	printf("Enter the name:");
	scanf("%s",p1->name);
	printf("Enter the country:");
	scanf("%s",p1->country);
	printf("Enter the runs:");
	scanf("%d",&p1->runs);
	printf("Enter the wickets:");
	scanf("%d",&p1->wickets);
	printf("\nDetails of the player entered is");
	printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
	printf("\n%d\t%s\t%s\t%d\t%d",p1->rank,p1->name,p1->country,p1->runs,p1->wickets);
}
void update(struct players *p1,int a,int b,int c)
{
	int i;
	for(i=0;i<a;i++)
	{
		if((p1+i)->rank==b)
		{
			(p1+i)->runs=c;
			printf("\nDetails of the player with rank %d with new runs %d is",b,c);
   			printf("\nRANK\tNAME\tCOUNTRY\tRUNS\tWICKETS");
    		printf("\n%d\t%s\t%s\t%d\t%d",(p1+i)->rank,(p1+i)->name,(p1+i)->country,(p1+i)->runs,(p1+i)->wickets);
		}
		else
			printf("\nPlayer with the rank %d is NOT AVAILABLE!!!",b);
	}
	
	
}
