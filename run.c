#include <stdio.h>
#include <string.h>
int main()
{
 int i,j,n;
 char str[20][20],temp[20];
 printf("Enter the number of names:");
 scanf("%d",&n);
 printf("Enter %d names:\n",n);
 for(i=0;i<n;i++)
 {
 scanf("%s",str[i]);
 }
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(strcmp(str[i],str[j])<0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("Names in descending order:\n");
 for(i=0;i<n;i++)
 {
 printf("%s\n",str[i]);
 }
 return 0;
}
