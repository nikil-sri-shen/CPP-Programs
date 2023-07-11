#include <stdio.h>
int main()
{
    int i, j, temp, n, y, x[100];
    printf("Enter how much elements has to be stored? \n");
    scanf("%d", &n);
 	printf("Enter the elements: \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &x[i]);
 		for (i=0;i<n;i++) 
        {
 			for (j=i+1;j<n;j++)
            {
 				if (x[i] > x[j]) 
                {
 					temp =  x[i];
                    x[i] = x[j];
                    x[j] = temp;
 				}
 			}
 		}
 	printf("Enter the position to find:\n");
    scanf("%d",&y);
   	printf("\n\t%d is the element.\n", x[y-1]);
}
