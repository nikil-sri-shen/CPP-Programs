#include <stdio.h>                             
int main()                                     
{                                               
	int i,j,n;                                  
	printf("\nEnter the limit to print *:");   
	scanf("%d",&n);                            
	for(i=n;i>=0;i--)                                
	{                                         
		for(j=0;j<i;j++)
		{
		   printf("*\t");                    
		}  
		printf("\n");                               
	}                                      
	return 0;
}
